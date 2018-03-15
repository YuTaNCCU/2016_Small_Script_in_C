#include <stdio.h>
#include <math.h>
#include <limits.h>    //求極值
#include <stdlib.h>   // rand() srand()
#include <time.h>    // time()
#include<windows.h>   // getch()


main()
{
int space_state=GetKeyState(32);
int current=0;
while(1)
{
current=GetKeyState(32);
if((current!=space_state)&&(current>=0))
	{
		printf("你按了空白鍵\n");
		space_state=current;
	}
}
}
