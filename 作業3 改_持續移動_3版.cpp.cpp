#include <stdio.h>
#include <windows.h>
int x=20,y=20,i,j;                         //宣告全域變數
int map[41][41];
int space_lock= 0,ChangeMove=0,ContinueMove=0;
double space_time=0.3;                      
LARGE_INTEGER start, end, frequency;
		
void Output();						//將陣列輸出到console
void move();						//改變X的位置 
void UnLock();						//是否大於0.1秒 
void ChangeDirection();				//按上下左右後改變方向 
void ContinueDirection();			//持續移動


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

void Output()								//將陣列輸出到console
{
	for(i=0;i<41;i++)
	{
		for(j=0;j<41;j++)
		{
			if (map[i][j]==0)
			printf(" ");           //陣列為0-->輸出空白  
			else
			printf("X");          //陣列為1-->輸出為X  
		}
		printf("\n");              
	}
} 

void move()    								//改變X的位置                       
{

	UnLock();
	map[x][y]=0;
	ChangeDirection(); 	
	ContinueDirection();
	map[x][y]=1;
}

void UnLock()								//是否大於0.1秒 
{
	if(space_lock==1) 						     //若是鎖上，看是否可以解鎖 
	{
		QueryPerformanceCounter(&end);          //結束計時 
		QueryPerformanceFrequency(&frequency);	//取得電腦執行的頻率 ex:3.5GHz 										  //知道結束時間
		if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=space_time)  //(結束時間-開始時間)/頻率 
		{
			space_lock=0; 						//解鎖 
		} 
	}
}

void ChangeDirection()						//按上下左右後改變方向 
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
 
void ContinueDirection()					//持續移動
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

