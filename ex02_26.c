#include <stdio.h>

int main()
{
	int num1,num2;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	if(!(num1%num2))
		printf("number1 multiple number2\n");
	else
		printf("number1 not multiple number2\n");
	return 0;
}
