#include<stdio.h>
main(){
	int i,j,r,R;
	printf("�п�J�~��b�|R:");
	scanf("%d",&R);
	printf("�п�J����b�|r:");
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
