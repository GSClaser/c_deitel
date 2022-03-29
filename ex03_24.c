#include <stdio.h>

int main()
{
	int counter=0,number,largest;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter the number: ");
	scanf("%d",&number);
	largest=number;
	while(counter<10)
	{
		printf("Enter the number: ");
		scanf("%d",&number);
		if(largest<number)
			largest=number;
		counter=counter+1;
	}
	printf("largest: %d\n",largest);
}
