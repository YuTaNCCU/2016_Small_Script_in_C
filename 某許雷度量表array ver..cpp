#include <stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
	int i=0,j=0,x[5]={0},average,y=0,z=0;
	char c[10];
	for(;i==0;)
	{
		printf("�п�J�Aı�o�YHsu�p���{��(5���̡A1������)�A�Y�n�����έp�A��0�G");
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
			printf("��F!�å�!\n");
	}
	printf("%d�����ĸ�Ƥ��A�YHsu�p�{�פ����p�U�G\n",j); 
	for(y=1;y<=5;y++)
	{
		printf("%d�p�G",y); 
		for(z=1;z<=x[y-1];z++)
		{
			printf("*"); 
		} 
		printf("\n");
	}	
	average=0;
	if (j)
		printf("������=%d\n",(x[0]+x[1]*2+x[2]*3+x[3]*4+x[4]*5)/j); 
	else
		printf("������=0\n");
	system("pause");
	
}
