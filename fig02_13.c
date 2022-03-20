#include <stdio.h>

int main()
{
	int num1;
	int num2;
	
	fflush(stdout);
	setbuf(stdout,NULL);

	printf("Enter two integers,and I will tell you\n");
	printf("the relationship they satisfy: ");
	
	scanf("%d%d",&num1,&num2);

	if(num1==num2)
	{
		printf("num1 is equal num2\n");
	}
	if(num1>num2)
	{
		printf("num1 is greater that num2\n");
	}
	if(num1<num2)
	{
		printf("num1 is less that num2\n");
	}
	return 0;
}
