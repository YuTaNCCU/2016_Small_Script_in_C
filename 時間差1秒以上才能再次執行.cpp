#include <stdio.h>
#include <windows.h>

main(){
	LARGE_INTEGER start, end,frequency;
	int space_lock=0;             //0�N��S��A1�N���� 
	double space_time=1;        //���j��0.1��H�W
	QueryPerformanceFrequency(&frequency);   //���o�q�����檺�W�v ex:3.5GHz
	
	while(1)
	{
		
		if(space_lock==1) 								//�Y�O��W�A�ݬO�_�i�H���� 
		{
			QueryPerformanceCounter(&end);  										  //���D�����ɶ�
			
			if((double)(end.QuadPart-start.QuadPart)/frequency.QuadPart>=space_time)  //(�����ɶ�-�}�l�ɶ�)/�W�v 
			space_lock=0; 								//���� 
		}
		if((GetAsyncKeyState(VK_SPACE)<0)&&(space_lock==0)) 
		{ 
			printf("�A���F�ť���");
			space_lock=1; 								//��W 
			QueryPerformanceCounter(&start);  										//���D�}�l�ɶ�
		} 
		
	}
}

