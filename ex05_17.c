#include <stdio.h>

int multiple(int number1,int number2)
{
	if(number1%number2==0)
		return 1;
	else
		return 0;
}

int main()
{
	int number1,number2;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter two numbers: ");
	scanf("%d%d",&number1,&number2);
	if(multiple(number1,number2))
	{
		printf("number1 multiple by number2\n");
	}
	else
	{
		printf("number1 not multiple by number2\n");
	}	
	return 0;
}
