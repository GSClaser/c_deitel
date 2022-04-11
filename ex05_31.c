#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip()
{
	return rand()%2;
}

int main()
{
	int i;
	int Heads=0;
	int Tails=0;
	srand(time(0));
	fflush(stdout);
	setbuf(stdout,NULL);
	for(i=0;i<100;i++)
	{
		if(flip()==0)
			Tails++;
		else
			Heads++;
	}
	printf("Tails: %d Heads: %d\n",Tails,Heads);
	return 0;
}
