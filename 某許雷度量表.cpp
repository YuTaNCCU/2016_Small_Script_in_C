#include <stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
	int i=0,j=0,x1=0,x2=0,x3=0,x4=0,x5=0,average,y=0,z=0;
	for(;true;)
	{
		printf("�п�J�Aı�o�YHsu�p���{��(5���̡A1������)�A�Y�n�����έp�A��0�G");
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
				printf("��F!�å�!\n");
				break;
		}
		if (i==1) 
		{
			break; 
		} 
	}
	printf("%d�����ĸ�Ƥ��A�YHsu�p�{�פ����p�U�G\n",j); 
	for(y=1;y<=5;y++)
	{
		switch (y)
		{
			case 1:
				printf("%d�p�G",y); 
				for(z=1;z<=x1;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;				
			case 2:
				printf("%d�p�G",y); 
				for(z=1;z<=x2;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
			case 3:
				printf("%d�p�G",y); 
				for(z=1;z<=x3;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
			case 4:
				printf("%d�p�G",y); 
				for(z=1;z<=x4;z++)
				{
					printf("*"); 
				} 
				printf("\n");
				break;
			case 5:
				printf("%d�p�G",y); 
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
	printf("������=%d\n",average); 
	system("pause");
	
}
