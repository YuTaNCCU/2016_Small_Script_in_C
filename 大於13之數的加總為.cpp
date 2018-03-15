#include <stdio.h>
#include <math.h>
#include <limits.h>    //求極值
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<conio.h>   // getch()

main(){
	for(;true;)
	{
		int M,N,x,y,z,i,j,k,a,b,c;
		printf("欲輸入幾個數字N:"); 
		scanf("%d",&N) ;
		for(i=1;i<=N;i++)
		{
			printf("第%d個數字是:",i); 
			scanf("%d",&x) ;
			if(x>=13)
			{
			y=y+x;	
			}  
		}  
		    printf("大於13之數的加總為%d",y);
		    
	getch();  //停下來
	printf("\n-----------------------------------\n");
	}
}


