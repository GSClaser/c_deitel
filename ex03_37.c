#include <stdio.h>

int main()
{
	int counter=0;
	while(counter<3000000)
	{
		if(!(counter%1000000))
			printf("counter: %d\n",counter);
			
		counter=counter+1;
	}
}
