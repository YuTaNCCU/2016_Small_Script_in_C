#include <stdio.h>
#include <math.h>
#include <limits.h>    //�D����
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<conio.h>   // getch()

int main(void){
for(;true;)
{
	int M,N,x,y,i,a,b,c;
	printf("��JN=");  
	scanf("%d",&N) ;  
	scanf("%d",&x);
	y=x;
	for(i=2;i<=N;i++)
	{
		scanf("%d",&x);
		if(y>x)      //�Y�s��J���Ƹ��p�A�h�⦹�ȶǵ�y 
		{
			y=x;
		}
	}
	printf("min=%d",y);
	
getch();  //���U��
printf("\n-----------------------------------\n");
}
}

