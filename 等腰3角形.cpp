#include <stdio.h>
main(){
int i,j,h,x;  //  i(�Ů��),j(�P����),h(�j���),x() 
printf("�п�J�h�ơG");
scanf("%d",&x);
for(i=1,j=1;i<=x;i+=1,j+=2)
	{
		for(h=1;h<=x-i;h+=1)  // �Ĥ@�h��ĥ|�h���Ů��=3�B2�B1�B0...  
		{
			printf(" "); 
		}
		for(h=1;h<=j;h+=1)  // �Ĥ@�h��ĥ|�h���P���� =1�B3�B5�B7... 
		{
			printf("*"); 
		}		
		printf("\n"); no
	}
}

