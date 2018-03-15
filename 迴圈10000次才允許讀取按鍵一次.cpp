#include <stdio.h>
#include <windows.h>

main()
{
	int state[256],current,i;
	int tstate[256], de_time = 10000;
	for(i=0;i<256;i=i+1)
	{
		state[i]=GetKeyState(i);
	}
	memset( tstate, 0, sizeof(int) * 256 );
			while(1)
		{
			for(i=0;i<256;i=i+1)
			{
				current=GetKeyState(i);
				if( ( current&0x8000 ) && ( tstate[i] == 0 ) )
				{
					printf("%d\n",i);
					state[i]=current;
					tstate[i]++;
				}
				if( tstate[i] > 0 ) {
					tstate[i]++;
					if( tstate[i] == de_time )
					    tstate[i] = 0;
				}
			}
		}

}
