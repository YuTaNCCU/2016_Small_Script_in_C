#include <stdio.h>
#include <math.h>
#include <limits.h>    //�D����
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<conio.h>   // getch()

main(){
	for(;true;)
	{
		int M,N,x,y,z,i,j,k,a,b,c;
		printf("����J�X�ӼƦrN:"); 
		scanf("%d",&N) ;
		for(i=1;i<=N;i++)
		{
			printf("��%d�ӼƦr�O:",i); 
			scanf("%d",&x) ;
			if(x>=13)
			{
			y=y+x;	
			}  
		}  
		    printf("�j��13���ƪ��[�`��%d",y);
		    
	getch();  //���U��
	printf("\n-----------------------------------\n");
	}
}


