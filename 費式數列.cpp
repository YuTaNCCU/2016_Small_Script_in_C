#include <stdio.h>
main(){
	int F1=1,F2=1,F3,i;
for(i=1;i<=10;)
	{
		F3=F2+F1;
		printf("total=%d\n",F3);
		F1=F2;
		F2=F3;
		i++;
	}  
}

