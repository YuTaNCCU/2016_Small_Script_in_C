#include <stdio.h>
#include <windows.h>

main(){
	LARGE_INTEGER start, end,frequency;
	int space_lock=0;             //0代表沒鎖，1代表有鎖 
	double space_time=1;        //間隔需0.1秒以上
	QueryPerformanceFrequency(&frequency);   //取得電腦執行的頻率 ex:3.5GHz
	
	while(1)
	{
		
		if(space_lock==1) 								//若是鎖上，看是否可以解鎖 
		{
			QueryPerformanceCounter(&end);  										  //知道結束時間
			
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=space_time)  //(結束時間-開始時間)/頻率 
			space_lock=0; 								//解鎖 
		}
		if((GetAsyncKeyState(VK_SPACE)<0)&&(space_lock==0)) 
		{ 
			printf("你按了空白鍵");
			space_lock=1; 								//鎖上 
			QueryPerformanceCounter(&start);  										//知道開始時間
		} 
		
	}
}

