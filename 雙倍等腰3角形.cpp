#include <stdio.h>
main(){
int i,j,k,l,m,n,o,h,x,y;  //  i(�Ů��),j(�P����),h(�j���),x() 
printf("�п�J�h�ơG");
scanf("%d",&x);
	for(l=1;l<=x;l+=1)                //�j�T���δ���  
	{ 
		for(i=1,j=1;i<=x;i+=1,j+=2)   //�p�T���δ��� 
		{
			for(n=1;n<=x-l;n+=1)      //����ΪŮ歫�� x-l�� 
			{
				for(o=1;o<=x-1;o+=1)
				printf(" ");
			}	
			for(k=1;k<=l;k+=1)       //(��*��)����l�� 
			{
				for(h=1;h<=x-i;h+=1)  // �Ů� 
				{
					printf(" "); 
				}
				for(h=1;h<=j;h+=1)  // *
				{
					y=2;
					printf("%c",y); 
				}		
				for(h=1;h<=x-i;h+=1)  // �Ů� 
				{
					printf(" "); 
				}
			}		
			printf("\n"); 
		}
		printf("\n"); 
	} 

}
