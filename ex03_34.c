#include <stdio.h>

int main()
{
	int counter=0,counter2=0;
	int size;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter size of cube: ");
	scanf("%d",&size);
	while(counter<size)
	{
		counter2=0;
		if(counter==0 || counter==size-1)
		{
			while(counter2<size)
			{
				printf("*");
				counter2=counter2+1;
			}
			printf("\n");
		}
		else
		{
			printf("*");
			while(counter2<size-2)
			{
				printf(" ");
				counter2=counter2+1;
			}
			printf("*");
			printf("\n");
		}
		counter=counter+1;
	}
	return 0;
}
