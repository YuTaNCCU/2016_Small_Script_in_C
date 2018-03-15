//有x元、2元=1瓶酒、2空瓶=1瓶酒 、4瓶蓋=1瓶酒

#include <stdio.h>
main()
{
	int x =0, n=0 , bottles=0 , caps=0 , total=0,i=1;
	printf("本來有多少錢：");
	scanf("%d",&x);
	n=n+x/2;
	printf("%d元可換%d瓶酒 \n",x,n);	
	for(;n>0;i++)
	{
		total=total+n;
		
		bottles=bottles+n;
		caps=caps+n;
		
		printf("%d.現在有酒%d瓶，喝完後有瓶身%d個、瓶頂 %d 個",i,n,bottles,caps);	
		
		n = bottles/2 + caps/4;
		printf("->可換%d瓶酒 ",n);	
		
		bottles=bottles%2;
		caps=caps%4;
		printf("->剩下瓶身%d個、瓶頂%d個 \n ",bottles,caps);	
	
	}
	printf("共可喝%d瓶，剩下瓶身%d個、瓶頂%d個",total,bottles,caps);
}
