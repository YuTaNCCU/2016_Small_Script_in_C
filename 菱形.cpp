#include <stdio.h>
main(){
int i,j,h,x;  //  i(空格數),j(星號數),h(迴圈用),x() 
printf("請輸入層數：");
scanf("%d",&x);
for(i=1,j=1;i<=x;i+=1,j+=2)
	{
		for(h=1;h<=x-i;h+=1)  // 第一層到第四層的空格數=3、2、1、0...  
		{
			printf(" "); 
		}
		for(h=1;h<=j;h+=1)  // 第一層到第四層的星號數 =1、3、5、7... 
		{
			printf("*"); 
		}		
		
		printf("\n"); 
	}
for(i=2;i<=x;i+=1)
	{
		for(h=1;h<=i-1;h+=1)  
		{
			printf(" "); 
		} 
		for(h=1;h<=2*(x-i)+1;h+=1) 
		{
			printf("*"); 
		} 
					
		printf("\n"); 
	} 
}

