#include <stdio.h>

int main()
{
	int counter;
	printf("number\tsquare\tcube\n");
	for(counter=0;counter<=10;counter++)
	{
		printf("%d\t%d\t%d\n",counter,counter*counter,counter*counter*counter);
	}
	return 0;
}
