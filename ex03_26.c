#include <stdio.h>
int main()
{
	int counter=1;
	printf("A\tA+2\tA+4\tA+6\n\n");
	while(counter<=5)
	{
		printf("%d\t%d\t%d\t%d\t\n",3*counter,3*counter+2,3*counter+4,3*counter+6);
		counter=counter+1;
	}
	return 0;
}
