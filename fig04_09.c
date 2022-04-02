#include <stdio.h>

int main()
{
	unsigned int counter=1;
	do
	{
		printf("counter = %d\n",counter);	
	}while(++counter<=10);
	return 0;
}
