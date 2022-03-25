#include <stdio.h>

int main()
{
	int number;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please,enter the number!\n");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("number is even\n");
	}
	else
		printf("number is odd\n");
	return 0;
}
