#include<stdio.h>
main(){
	int i,j,r,R;
	printf("請輸入外圓半徑R:");
	scanf("%d",&R);
	printf("請輸入內圓半徑r:");
	scanf("%d",&r);
	for(i=-2;i<=R*2+1;i++){
		for(j=-2;j<=R*2+1;j++){
		if ((i-R)*(i-R)+(j-R)*(j-R)<=R*R&&R>r)
		printf("*");
		if ((i-R)*(i-R)+(j-R)*(j-R)>R*R) printf(" ");
		if ((i-r)*(i-r)+(j-r)*(j-r)<=r*r&&r<R)
			printf(" ");
		
		}
		printf("\n");
	}
	
}
