#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 30 /*�ܡ@�ס@�����@�O�`��*/
main(){
	int n, i, j;
	int A[N];/*�̦h��J���������*/
	for (;true;) /*�@��Ū�J�Ʀr*/
	{
		printf("��Jn�An�O�`�ơC��J�j��%d���ưh�X�C\n", N);
		scanf("%d", &n);
		if (n > N)
			break;/*���X�j��*/
		for (i = 0; i < n; i ++)
			scanf("%d", &A[i]);	/*Ū�Jn�Ӽƨ�A[0],A[1],A[2],A[3],...,A[n-1]*/ 
		for (i = 0; i < n; i ++)	/*��i�Ӧ�m���T�Ai+1�h�T�wi�ӼƦr�Ѥp��j�ƦC*/
		{
			for (int t, j = n-1; j > i; j --)/*�q�̫�@�ө��^���*/
			{
				if (A[j] < A[j-1])/*��j�Ӹ��j-1�Ӥ�A���p�����e�洫*/ 
				{
					t = A[j-1];
					A[j-1] = A[j];
					A[j] = t;
				}
			}
		}
		for (i = 0; i < n-1; i ++)/*�L�XA[0],A[1],...,A[n-2]*/
			printf("%d ", A[i]);
		if (i < n)/*�L�X��[n-1]����*/
			printf("%d\n", A[i]);
	}

}

