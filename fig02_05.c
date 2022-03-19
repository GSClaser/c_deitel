#include <stdio.h>

int main()
{
	int integer1;
	int integer2;
	int sum;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter first integer\n");
	scanf(" %d",&integer1);
	printf("Enter second integer\n");
	scanf(" %d",&integer2);
	sum=integer1+integer2;
	printf("sum=%d\n",sum);
	return 0;
}
