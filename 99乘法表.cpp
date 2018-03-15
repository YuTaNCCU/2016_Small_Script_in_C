#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
main(){
int x,y,i,j;
for(i=2;i<=9;i++)
	{
		for(j=2;j<=9;j++)
		{
			printf("%dx%d=%d  ",i,j,i*j);
		}
		printf("\n",i,j,i*j);
	}
}

