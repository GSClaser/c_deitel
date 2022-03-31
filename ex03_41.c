#include <stdio.h>

int main()
{
	int counter=2;
	while(counter<100000)
	{
		printf("%d ",counter);
		counter=counter*2;
	}
	return 0;
}
