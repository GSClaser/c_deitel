#include <stdio.h>

int even(int number)
{
	if(number==number/2*2)
		return 1;
	return 0;
}

int main()
{
	int number;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter number: ");
	scanf("%d",&number);
	if(even(number))
		printf("number is even\n");
	else
		printf("number is odd\n");
	return 0;
}
