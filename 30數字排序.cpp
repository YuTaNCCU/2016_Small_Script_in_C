#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 30 /*Ｎ　＝　３０　是常數*/
main(){
	int n, i, j;
	int A[N];/*最多輸入３０筆資料*/
	for (;true;) /*一直讀入數字*/
	{
		printf("輸入n，n是總數。輸入大於%d的數退出。\n", N);
		scanf("%d", &n);
		if (n > N)
			break;/*跳出迴圈*/
		for (i = 0; i < n; i ++)
			scanf("%d", &A[i]);	/*讀入n個數到A[0],A[1],A[2],A[3],...,A[n-1]*/ 
		for (i = 0; i < n; i ++)	/*第i個位置正確，i+1則確定i個數字由小到大排列*/
		{
			for (int t, j = n-1; j > i; j --)/*從最後一個往回比較*/
			{
				if (A[j] < A[j-1])/*第j個跟第j-1個比，較小的往前交換*/ 
				{
					t = A[j-1];
					A[j-1] = A[j];
					A[j] = t;
				}
			}
		}
		for (i = 0; i < n-1; i ++)/*印出A[0],A[1],...,A[n-2]*/
			printf("%d ", A[i]);
		if (i < n)/*印出Ａ[n-1]換行*/
			printf("%d\n", A[i]);
	}

}

