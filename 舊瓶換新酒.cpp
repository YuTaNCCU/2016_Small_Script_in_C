//有x元、2元=1瓶酒、2空瓶=1瓶酒 、4瓶蓋=1瓶酒

#include <stdio.h>
main()
{
	while(1)
	{
		int x =0, n=0 , bottles=0 , caps=0 , total=0;
		char c;
		printf("本來有多少錢：");
		scanf("%d",&x);
		for(n=n+x/2;n>0;)
		{
			total=total+n;
			bottles=bottles+n;
			caps=caps+n;
			
			printf("n=%d \t bottles=%d \t caps=%d \n",n,bottles,caps);	
			
			n = bottles/2 + caps/4;
			
			bottles=bottles%2;
			caps=caps%4; 
		}
		printf("total=%d\n",total);
		scanf("%c",&c);
		scanf("%c",&c);
	}
	
}
