#include <stdio.h>
#include <math.h>
#include <limits.h>    //¨D·¥­È
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<conio.h>   // getch()

main(){
	for(;true;)
	{
		int M,N,x,y,z,i,j,k,a,b,c;
		for(x=1;x<=100;x++)
		{
			for(y=1;y<=100;y++)
			{
				for(z=1;z<=100;z++)
				{
					if ((x*x+y*y==z*z)&&(x<y)&&(y<z)) 
					printf("%d¡B%d¡B%d\n",x,y,z);
				}
			}	
		}
				
	getch();  //°±¤U¨Ó
	printf("\n-----------------------------------\n");
	}
}


