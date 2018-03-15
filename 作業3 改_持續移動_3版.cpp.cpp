#include <stdio.h>
#include <windows.h>
int x=20,y=20,i,j;                         //�ŧi�����ܼ�
int map[41][41];
int space_lock= 0,ChangeMove=0,ContinueMove=0;
double space_time=0.3;                      
LARGE_INTEGER start, end, frequency;
		
void Output();						//�N�}�C��X��console
void move();						//����X����m 
void UnLock();						//�O�_�j��0.1�� 
void ChangeDirection();				//���W�U���k����ܤ�V 
void ContinueDirection();			//���򲾰�


int main(){
	memset(map,0,sizeof(map)); 	
	while(1)                                
	{
		Output();							
		move();		 						
		system ("cls");   						//clear screen 
	}
	return 0;
}

void Output()								//�N�}�C��X��console
{
	for(i=0;i<41;i++)
	{
		for(j=0;j<41;j++)
		{
			if (map[i][j]==0)
			printf(" ");           //�}�C��0-->��X�ť�  
			else
			printf("X");          //�}�C��1-->��X��X  
		}
		printf("\n");              
	}
} 

void move()    								//����X����m                       
{

	UnLock();
	map[x][y]=0;
	ChangeDirection(); 	
	ContinueDirection();
	map[x][y]=1;
}

void UnLock()								//�O�_�j��0.1�� 
{
	if(space_lock==1) 						     //�Y�O��W�A�ݬO�_�i�H���� 
	{
		QueryPerformanceCounter(&end);          //�����p�� 
		QueryPerformanceFrequency(&frequency);	//���o�q�����檺�W�v ex:3.5GHz 										  //���D�����ɶ�
		if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=space_time)  //(�����ɶ�-�}�l�ɶ�)/�W�v 
		{
			space_lock=0; 						//���� 
		} 
	}
}

void ChangeDirection()						//���W�U���k����ܤ�V 
{
	for(i=37;i<=40;i++)
	{
		if(GetAsyncKeyState(i)<0)
		ChangeMove=i;
		ContinueMove=i;
	} 
	if(space_lock==0)  
	{ 
	  i=1; 
	  switch (ChangeMove)
		{
			case 37: 
				y--;
				if(y<0) 
				{ 
					y++; 
				}
				 i=2; 
				break;
			case 38: 
				x--;
				if(x<0) 
				{ 
					x++; 
				}
				i=2;
				break;
			case 39: 
				y++;
				if(y>39) 
				{ 
					y--; 
				}
				i=2;
				break;
			case 40: 
				x++;
				if(x>39) 
				{ 
					x--; 
				}  
				i=2;
				break;
			default:
				break;
		}
		
		if(i=2)
		{
			space_lock=1 ;								
			QueryPerformanceCounter(&start);
		}
	} 
} 
 
void ContinueDirection()					//���򲾰�
{
	if(space_lock==0)  
	{ 

	  i=1; 
	  switch (ContinueMove)
		{
			case 37: 
				y--;
				if(y<0) 
				{ 
					y++; 
				}
				 i=2; 
				break;
			case 38: 
				x--;
				if(x<0) 
				{ 
					x++; 
				}
				i=2;
				break;
			case 39: 
				y++;
				if(y>39) 
				{ 
					y--; 
				}
				i=2;
				break;
			case 40: 
				x++;
				if(x>39) 
				{ 
					x--; 
				}  
				i=2;
				break;
			default:
				break;
		}
		if(i=2)
		{
			space_lock=1 ;								
			QueryPerformanceCounter(&start);
		}
	} 
} 

