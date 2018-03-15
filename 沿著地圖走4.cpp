#include <stdio.h>
#include <windows.h>

int i,j,Old_x,Old_y,New_x=21,New_y=21 ;                   
int Player_1[40][40],Map_1[40][40],space_lock=1,Direction=0, evermove;
double space_time=0;                      
LARGE_INTEGER t1, t2, frequency;
		
void GetKey();							
void NextStep();
void BoundaryCondition();
void TimeControl();	
void Output();
		
int main()
{
	memset(Player_1,0,sizeof(Player_1)); 	
	while(1)                                
	{
		GetKey();							
		NextStep();
		BoundaryCondition();
		TimeControl();	
		Player_1[Old_x][Old_y]=0;
		Player_1[New_x][New_y]=1;
		system ("cls"); 
		Output();						
		Sleep(100);
		
	}
	//return 0;
}

void GetKey()
{
	for(i=37;i<=40;i++)
	{
		if(GetAsyncKeyState(i)<0)
		Direction=i;
	}
} 

void NextStep ()
{
	evermove=0;
	Old_x=New_x;
	Old_y=New_y;
		switch (Direction)
		{
			case 37: 
				New_y--;
				evermove=1; 
				break;
			case 38: 
				New_x--;
				evermove=1;
				break;
			case 39: 
				New_y++;
				evermove=1;
				break;
			case 40: 
				New_x++;
				evermove=1;
				break;
			default:
				break;
		}
	
}


void BoundaryCondition()
{
	memset(Map_1,1,sizeof(Map_1));
	for(i=0;i<40;i++)
	{
		Map_1[0][i]=0;
		Map_1[2][i]=0;
		Map_1[7][i]=0;
		Map_1[15][i]=0;
		Map_1[23][i]=0;
		Map_1[30][i]=0;
		Map_1[39][i]=0;
	}
	for(i=0;i<40;i++)
	{
		Map_1[i][0]=0;
		Map_1[i][39]=0;
	}
	Map_1[2][3]=1;
	Map_1[2][4]=1;
	Map_1[2][35]=1;
	Map_1[7][23]=1;
	Map_1[15][20]=1;
	Map_1[23][15]=1;
	Map_1[30][11]=1;
	Map_1[2][36]=1;
	Map_1[7][24]=1;
	Map_1[15][21]=1;
	Map_1[23][16]=1;
	Map_1[30][12]=1;
		
	if (Map_1[New_x][New_y]==0)
	{
		New_x=Old_x;
		New_y=Old_y;
	}
	
} 


void TimeControl()
{
	if(evermove==1)
	{
		space_lock=1 ;								
		QueryPerformanceCounter(&t1);
	}
	if(space_lock==1) 						     //若是鎖上，看是否可以解鎖 
	{
		QueryPerformanceCounter(&t2);          //結束計時 
		QueryPerformanceFrequency(&frequency);	//取得電腦執行的頻率 ex:3.5GHz 										  //知道結束時間
		if((double)(t2.QuadPart-t1.QuadPart)/frequency.QuadPart>=space_time)  //(結束時間-開始時間)/頻率 
		{
			space_lock=0; 						//解鎖 
		} 
	}
}

void Output()
{
	for(i=0;i<40;i++)
	{
		for(j=0;j<40;j++)
		{
			if (Map_1[i][j]==0)
			printf("o");
			else
			{
				if (Player_1[i][j]==0)
				printf(" ");           //陣列為0-->輸出空白  
				else
				printf("X");          //陣列為1-->輸出為X 
			}          
		}
		printf("\n"); 
	}
}


