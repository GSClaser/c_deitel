#include <stdio.h>

int main()
{
	int counter=1;
	int counter2=1;
	while(counter<=100)
	{

		printf("* ");		
		if(counter%10==0)
		{
			printf("\n");
			if(counter2%2==1)
			{	
				printf(" ");
			}
			counter2=counter2+1;
		}
		counter=counter+1;
	}
	return 0;
}
