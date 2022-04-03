#include <stdio.h>

int main()
{
	fflush(stdout);
	setbuf(stdout,NULL);
	int num1,sizeOfCredit1,balance1;
	int num2,sizeOfCredit2,balance2;
	int num3,sizeOfCredit3,balance3;
	printf("Enter client blank: ");
	scanf("%d",&num1);
	printf("Enter client credit: ");
	scanf("%d",&sizeOfCredit1);
	printf("Enter client balance: ");
	scanf("%d",&balance1);
	printf("Enter client blank: ");
	scanf("%d",&num2);
	printf("Enter client credit: ");
	scanf("%d",&sizeOfCredit2);
	printf("Enter client balance: ");
	scanf("%d",&balance2);
	printf("Enter client blank: ");
	scanf("%d",&num3);
	printf("Enter client credit: ");
	scanf("%d",&sizeOfCredit3);
	printf("Enter client balance: ");
	scanf("%d",&balance3);
	if(sizeOfCredit1/2<balance1)
	{
		printf("clint1 out of balance\n");	
	}

	if(sizeOfCredit2/2<balance2)
	{
		printf("clint2 out of balance\n");	
	}

	if(sizeOfCredit3/2<balance3)
	{
		printf("clint3 out of balance\n");	
	}

}
