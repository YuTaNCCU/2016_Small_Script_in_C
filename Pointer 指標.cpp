#include "stdio.h"
main(){
	int a = 10;
	int *b = &a;
	int **c= &b;
	printf("&a = %d\n", &a);
	printf("a = %d\n",  a);
	printf("*b = %d\n", *b);
	printf("**c = %d\n", **c);
	printf("b = %d\n", b);
	printf("*c = %d\n", *c);
	printf("c = %d\n", c);
}
