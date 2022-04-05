#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	printf("%d\n",1+rand()%2);
	printf("%d\n",1+rand()%100);
	printf("%d\n",rand()%10);
	printf("%d\n",1000+rand()%3);
	printf("%d\n",-1+rand()%3);
	printf("%d\n",-3+rand()%15);
	return 0;
}
