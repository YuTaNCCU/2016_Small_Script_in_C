#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
for(;true;)
{	int  x1,xa,y1,ya,r,rr;
	printf("�п�J�j�b�|r:");
	scanf("%d",&r);
	printf("�п�J�p�b�|rr:");
	scanf("%d",&rr);
	for(y1=1;y1<=2*r+1;y1++){
		for(x1=1;x1<=2*r+1;x1+=1)
		{
			ya=abs(y1-r-1);
			xa=abs(x1-r-1);
			if((xa*xa+ya*ya)<=(r*r)&&(rr*rr)<=(xa*xa+ya*ya))
			{
			 	printf("oo");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
getch();  //���U��
printf("\n-----------------------------------\n");
}
}


