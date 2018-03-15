#include <stdio.h>
#include <math.h>
#include <limits.h>    //求極值
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include <conio.h>   // getch()
#include <string.h>
#include <windows.h>

main(){
	int M,N,x=5,y=5,z,i,j,k,a,b,c;
	int map[10][10];
	memset(map,0,sizeof(map));  //全部清為0
	map[x][y]=1;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if (map[i][j]==0)
				printf(" ");
				else
				printf("x");
			}
			printf("\n");
		}
		system ("cls");   //clear screen
	}
	map[x][y]=move()
}

void move()
{

	LARGE_INTEGER start, end,frequency;
	int sapce_lock=0;             //0代表沒鎖，1代表有鎖 
	double space_time=0.1;        //間隔需0.1秒以上
	QueryPerformanceFrequency(&frequency);   //取得電腦執行的頻率 ex:3.5GHz
	
	while(1)
	{
		if((GetAsyncKeyState(VK_SPACE)<0)&&(sapce_lock=0)) 
		{ 
			printf("你按了空白鍵");
			sapce_lock=1; 								//鎖上 
			QueryPerformanceFrequency(&start);  										//知道開始時間
		} 
		
		if(sapce_lock==1) 								//若是鎖上，看是否可以解鎖 
		{
			QueryPerformanceFrequency(&end);  										  //知道結束時間
			
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=space_time)  //(結束時間-開始時間)/頻率 
			sapce_lock=0; 								//解鎖 
		}
	}
	
}

