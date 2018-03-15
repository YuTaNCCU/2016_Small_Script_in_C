#include <stdio.h>
#include <math.h>
#include <limits.h>    //¨D·¥­È
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<conio.h>   // getch()

main(){
	int M,N,x,y,z,i,j,k,a,b,c;
	int A[10][10];
	for(k=1;true;k++)
	{
		
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(k%2==1)
					A[i][j]=0;
				else
					A[i][j]=1;
			}
		}
		
		
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				printf("%d",A[i][j]);
			}
			printf("\n");
		}
		
		system("cls") ; 
	}
}

