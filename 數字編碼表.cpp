#include <stdio.h>
#include <math.h>
main() 
{
	int i=1,j,x=99,y=1;
	char A[150];
		for(j=0;j<=150;j++)
		{
			A[j]=j;
		}
		for(j=0;j<=150;j++)
		{
			printf("%d%c\n",j,A[j]);
		}
}
