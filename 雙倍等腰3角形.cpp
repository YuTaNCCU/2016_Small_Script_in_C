#include <stdio.h>
main(){
int i,j,k,l,m,n,o,h,x,y;  //  i(空格數),j(星號數),h(迴圈用),x() 
printf("請輸入層數：");
scanf("%d",&x);
	for(l=1;l<=x;l+=1)                //大三角形換行  
	{ 
		for(i=1,j=1;i<=x;i+=1,j+=2)   //小三角形換行 
		{
			for(n=1;n<=x-l;n+=1)      //正方形空格重複 x-l次 
			{
				for(o=1;o<=x-1;o+=1)
				printf(" ");
			}	
			for(k=1;k<=l;k+=1)       //(空*空)重複l次 
			{
				for(h=1;h<=x-i;h+=1)  // 空格 
				{
					printf(" "); 
				}
				for(h=1;h<=j;h+=1)  // *
				{
					y=2;
					printf("%c",y); 
				}		
				for(h=1;h<=x-i;h+=1)  // 空格 
				{
					printf(" "); 
				}
			}		
			printf("\n"); 
		}
		printf("\n"); 
	} 

}
