#include <stdio.h>
#include <math.h>
#include <limits.h>    //�D����
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include <conio.h>   // getch()
#include <string.h>
#include <windows.h>

main(){
	int M,N,x=5,y=5,z,i,j,k,a,b,c;
	int map[10][10];
	memset(map,0,sizeof(map));  //�����M��0
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
	int sapce_lock=0;             //0�N��S��A1�N���� 
	double space_time=0.1;        //���j��0.1��H�W
	QueryPerformanceFrequency(&frequency);   //���o�q�����檺�W�v ex:3.5GHz
	
	while(1)
	{
		if((GetAsyncKeyState(VK_SPACE)<0)&&(sapce_lock=0)) 
		{ 
			printf("�A���F�ť���");
			sapce_lock=1; 								//��W 
			QueryPerformanceFrequency(&start);  										//���D�}�l�ɶ�
		} 
		
		if(sapce_lock==1) 								//�Y�O��W�A�ݬO�_�i�H���� 
		{
			QueryPerformanceFrequency(&end);  										  //���D�����ɶ�
			
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=space_time)  //(�����ɶ�-�}�l�ɶ�)/�W�v 
			sapce_lock=0; 								//���� 
		}
	}
	
}

