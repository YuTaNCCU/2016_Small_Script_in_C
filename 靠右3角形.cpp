#include <stdio.h>
main(){
int i,j,h,x;
printf("�п�J�h��");
scanf("%d",&x);
for(i=1;i<=x;i+=1)
	{
		for(h=(x-i);h>=1;h-=1)
		{
			printf(" "); 
		}
		for(j=1;j<=i;j+=1)
		{
			printf("**"); 
		}		
		printf("\n"); 
	}
}

