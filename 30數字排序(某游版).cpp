#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h> 
main()
{
	int n, i, j;
	char b='0';
	for (; b!='n' && b!='N' ;) /*���ƨϥ�*/
	{	
		      	/*��J�`��*/
		printf("�п�J�`��n�C\n");
		scanf("%d", &n);
		int A[n];
		
	 		/*Ū�Jn�Ӽƨ�A[1],A[2],A[3],...,A[n]*/ 
	 	printf("�Ш̧ǿ�J��%d�ӼơC\n", n);
		for (i = 1; i <= n; i ++)
		{
			scanf("%d", &A[i]);	
		}	
		
			/*��j�Ӹ��j+1�Ӥ�A���p�����e�洫*/ 
		for (int t, j = 1; j <= n-1; j ++)
		{
		 	for(int k = j+1; k <= n; k ++)
		 	{
			 	if (A[j] > A[k])
				{
					t = A[j];
					A[j] = A[k];
					A[k] = t;
				}
			 }
		}
		
			/*�L�X���G*/
		printf("�Ѥp��j�̧ǬO�G" );
		for (i = 1; i <= n; i ++)
			{printf("%d ", A[i]);}
		printf("\n" );
		
			/*���X�j��*/
		//printf("�٭n�A�Ӥ@����?(�O=Y,�_=N)\n");
		
		//getch();  //���U��		  
		//scanf("%c",&b) ;
	}

}

