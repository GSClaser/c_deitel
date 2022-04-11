#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,y;
	int z;
	fflush(stdout);
	setbuf(stdout,NULL);
	srand(time(0));
	x=rand()%10;
	y=rand()%10;
	while(1)	
	{
		printf("How much is %d times %d?: ",x,y);
		scanf("%d",&z);
		if(x*y==z)
		{
			printf("Very well!\n");
			break;
		}
		else
		{
			printf("Wrong!Make again!\n");
		}	
	}
	return 0;
}
