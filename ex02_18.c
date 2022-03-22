#include <stdio.h>

int main()
{
	int number1,number2;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please,enter two numbers\n");
	scanf("%d%d",&number1,&number2);
	if(number1==number2)
	{
		printf("These numbers are equal\n");
	}
	if(number1>number2)
	{
		printf("%d is larger",number1);
	}
	else if(number1<number2)
		printf("%d is larger",number2);
	return 0;
}
