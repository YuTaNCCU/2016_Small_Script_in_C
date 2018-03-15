#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h> 
main()
{
	int n, i, j;
	char b='0';
	for (; b!='n' && b!='N' ;) /*重複使用*/
	{	
		      	/*輸入總數*/
		printf("請輸入總數n。\n");
		scanf("%d", &n);
		int A[n];
		
	 		/*讀入n個數到A[1],A[2],A[3],...,A[n]*/ 
	 	printf("請依序輸入此%d個數。\n", n);
		for (i = 1; i <= n; i ++)
		{
			scanf("%d", &A[i]);	
		}	
		
			/*第j個跟第j+1個比，較小的往前交換*/ 
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
		
			/*印出結果*/
		printf("由小到大依序是：" );
		for (i = 1; i <= n; i ++)
			{printf("%d ", A[i]);}
		printf("\n" );
		
			/*跳出迴圈*/
		//printf("還要再來一次嗎?(是=Y,否=N)\n");
		
		//getch();  //停下來		  
		//scanf("%c",&b) ;
	}

}

