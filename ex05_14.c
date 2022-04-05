#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	printf("%d\n",2+(rand()%4)*2);
	return 0;
}
