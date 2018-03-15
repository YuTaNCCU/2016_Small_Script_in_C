#include <stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
	int i=0,j=0,x1=0,x2=0,x3=0,x4=0,x5=0,average,y=0,z=0;
	for(;true;)
	{
		printf("請輸入你覺得某Hsu雷的程度(5為最，1為布蕾)，若要結束統計，按0：");
		scanf("%d",&y);
		switch (y)
		{
			case 0:
				i=1;
				break;
			case 1:
				x1+=1;
				j+=1;
				break;				
			case 2:
				x2+=1;
				j+=1;
				break;
			case 3:
				x3+=1;
				j+=1;
				break;
			case 4:
				x4+=1;
				j+=1;
				break;
			case 5:
				x5+=1;
				j+=1;
				break;
			default:
				printf("怒了!亂打!\n");
				break;
		}
		if (i==1) 
		{
			break; 
		} 
	}
	printf("%d筆有效資料中，某Hsu雷程度分布如下：\n",j); 
	for(y=1;y<=5;y++)
	{
		switch (y)
		{
			case 1:
				printf("%d雷：",y); 
				for(z=1;z<=x1;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;				
			case 2:
				printf("%d雷：",y); 
				for(z=1;z<=x2;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
			case 3:
				printf("%d雷：",y); 
				for(z=1;z<=x3;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
			case 4:
				printf("%d雷：",y); 
				for(z=1;z<=x4;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
			case 5:
				printf("%d雷：",y); 
				for(z=1;z<=x5;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
		}	
			
	}
	if (j)
		average=((x1+x2*2+x3*3+x4*4+x5*5)/j);
	else
		average=0;
	printf("平均值=%d\n",average); 
	system("pause");
	
}
