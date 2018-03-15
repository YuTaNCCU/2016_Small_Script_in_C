#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
main()
{	
	int i,j,k,l,m,n;
	for(i=0;i<=9;i=i+1)
	{
		if(i!=0)
			printf("\n");
			for(j=0;j<=9;j=j+1)
				{
					if((i==5)&&(j==5))
						printf("x");
					else printf(" ");
				}
	}
	LARGE_INTEGER start,end,frequency;
	// 38↑40↓37←39→ 
	int UP_lock=0; //0代表沒鎖，1代表有鎖
 	int DOWN_lock=0;
	int LEFT_lock=0; 
	int RIGHT_lock=0;  
 	double UP_time=2; //間隔需0.3秒以上
 	double DOWN_time=0.3;
 	double LEFT_time=0.3;
 	double RIGHT_time=0.3;
 	QueryPerformanceFrequency(&frequency); 
 	k=0;
 	l=0;
 	m=0;
 	n=0;
	while(1)
	{
		if((GetAsyncKeyState(38)<0)&&(UP_lock==0))
		{ 
			UP_lock=1; //鎖上 
			system ("cls");
			k=k+1;
			i=5-k+l;
			if(i<0) k=k-1;
			for(i=0;i<=9;i=i+1)
			{
				if(i!=0)
					printf("\n");
				
				for(j=0;j<=9;j=j+1)
				{
					if((i==5-k+l)&&(j==5-m+n))
						printf("x");
					else printf(" ");
				}
			}
			QueryPerformanceCounter(&start); //知道開始時間
		} 
		if(UP_lock==1)
		{ 
			QueryPerformanceCounter(&end); //知道結束時間
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=UP_time) //(結束時間-開始時間)/頻率 
			UP_lock=0;  //解鎖 
		}
		
		if((GetAsyncKeyState(40)<0)&&(DOWN_lock==0))
		{ 
			DOWN_lock=1; //鎖上 
			system ("cls");
			l=l+1;
			i=5-k+l;
			if(i>9) l=l-1; 
			for(i=0;i<=9;i=i+1)
			{
				if(i!=0)
					printf("\n");
				for(j=0;j<=9;j=j+1)
				{
					if((i==5-k+l)&&(j==5-m+n))
						printf("x");
					else printf(" ");
				}
			}
			QueryPerformanceCounter(&start); //知道開始時間
		} 
		if(DOWN_lock==1)
		{ 
			QueryPerformanceCounter(&end); //知道結束時間
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=DOWN_time) //(結束時間-開始時間)/頻率 
			DOWN_lock=0;  //解鎖 
		}
		if((GetAsyncKeyState(37)<0)&&(LEFT_lock==0)) 
		{ 
			LEFT_lock=1; //鎖上 
			system ("cls");
			m=m+1;
			if(5-m+n<0) m=m-1;
			for(i=0;i<=9;i=i+1)
			{
				if(i!=0)
					printf("\n");
				for(j=0;j<=9;j=j+1)
				{
					if((i==5-k+l)&&(j==5-m+n))
						printf("x");
					else printf(" ");
				}
			}
			QueryPerformanceCounter(&start); //知道開始時間
		} 
		if(LEFT_lock==1)
		{ 
			QueryPerformanceCounter(&end); //知道結束時間
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=LEFT_time) //(結束時間-開始時間)/頻率 
			LEFT_lock=0;  //解鎖 
		}
		
		if((GetAsyncKeyState(39)<0)&&(RIGHT_lock==0))
		{ 
			RIGHT_lock=1; //鎖上 
			system ("cls");
			n=n+1;
			if(5-m+n>9) n=n-1;
			for(i=0;i<=9;i=i+1)
			{
				if(i!=0)
					printf("\n");
				for(j=0;j<=9;j=j+1)
				{
					if((i==5-k+l)&&(j==5-m+n))
						printf("x");
					else printf(" ");
				}
			}
			QueryPerformanceCounter(&start); //知道開始時間
		} 
		if(RIGHT_lock==1)
		{ 
			QueryPerformanceCounter(&end); //知道結束時間
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=RIGHT_time) //(結束時間-開始時間)/頻率 
			RIGHT_lock=0;  //解鎖 
		}
	}
}
		
		

		
		
	
	

	
	







