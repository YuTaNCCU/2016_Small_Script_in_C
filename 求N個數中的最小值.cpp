#include <stdio.h>
#include <math.h>
#include <limits.h>    //求極值
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<conio.h>   // getch()

int main(void){
for(;true;)
{
	int M,N,x,y,i,a,b,c;
	printf("輸入N=");  
	scanf("%d",&N) ;  
	scanf("%d",&x);
	y=x;
	for(i=2;i<=N;i++)
	{
		scanf("%d",&x);
		if(y>x)      //若新輸入的數較小，則把此值傳給y 
		{
			y=x;
		}
	}
	printf("min=%d",y);
	
getch();  //停下來
printf("\n-----------------------------------\n");
}
}

