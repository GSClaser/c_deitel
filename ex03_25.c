#include <stdio.h>

int main()
{
	int counter=1;
	printf("N\t10*N\t100*N\t1000*N\n\n");
	while(counter<=10)
	{
		printf("%d\t%d\t%d\t%d\n",counter,10*counter,100*counter,1000*counter);
		counter=counter+1;
	}
	return 0;
}
