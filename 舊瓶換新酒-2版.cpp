//��x���B2��=1�~�s�B2�Ų~=1�~�s �B4�~�\=1�~�s

#include <stdio.h>
main()
{
	int x =0, n=0 , bottles=0 , caps=0 , total=0,i=1;
	printf("���Ӧ��h�ֿ��G");
	scanf("%d",&x);
	n=n+x/2;
	printf("%d���i��%d�~�s \n",x,n);	
	for(;n>0;i++)
	{
		total=total+n;
		
		bottles=bottles+n;
		caps=caps+n;
		
		printf("%d.�{�b���s%d�~�A�ܧ��ᦳ�~��%d�ӡB�~�� %d ��",i,n,bottles,caps);	
		
		n = bottles/2 + caps/4;
		printf("->�i��%d�~�s ",n);	
		
		bottles=bottles%2;
		caps=caps%4;
		printf("->�ѤU�~��%d�ӡB�~��%d�� \n ",bottles,caps);	
	
	}
	printf("�@�i��%d�~�A�ѤU�~��%d�ӡB�~��%d��",total,bottles,caps);
}
