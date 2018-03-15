#include <stdio.h>
#include <windows.h>

main()
{
	int state[256],current,i;
	for(i=0;i<256;i=i+1)
	{
		state[i]=GetKeyState(i);
	}
	
	while(1)
	{
		for(i=0;i<256;i=i+1)
		{
			current=GetKeyState(i);
			if((current!=state[i])&&(current>=0))
			{
				printf("%d\n",i);
				state[i]=current;
			}
		}
	}

}
