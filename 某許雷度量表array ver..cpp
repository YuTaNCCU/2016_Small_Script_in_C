#include <stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
	int i=0,j=0,x[5]={0},average,y=0,z=0;
	char c[10];
	for(;i==0;)
	{
		printf("請輸入你覺得某Hsu雷的程度(5為最，1為布蕾)，若要結束統計，按0：");
		scanf("%s",c);
		y = c[0]-48;
		printf("c = %d, y = %d\n", c[0], y);
		if (y == 0)
			break;		
		if (y > 0 && y <= 5)
		{
			x[y-1] ++;
			j ++;
		}
		else
			printf("怒了!亂打!\n");
	}
	printf("%d筆有效資料中，某Hsu雷程度分布如下：\n",j); 
	for(y=1;y<=5;y++)
	{
		printf("%d雷：",y); 
		for(z=1;z<=x[y-1];z++)
		{
			printf("*"); 
		} 
		printf("\n");
	}	
	average=0;
	if (j)
		printf("平均值=%d\n",(x[0]+x[1]*2+x[2]*3+x[3]*4+x[4]*5)/j); 
	else
		printf("平均值=0\n");
	system("pause");
	
}
