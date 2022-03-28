#include <stdio.h>

int main()
{
	int number;
	float balance;
	float costs;
	float credits;
	float limit_credits;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter number of check(-1,if enter ended): ");
	scanf("%d",&number);
	printf("Enter balance: ");
	scanf("%f",&balance);
	printf("Enter costs: ");
	scanf("%f",&costs);
	printf("Enter credits: ");
	scanf("%f",&credits);
	printf("Enter limit credits: ");
	scanf("%f",&limit_credits);
	if(balance+costs-credits>limit_credits)
	{
		printf("check: %d\n",number);
		printf("limit credits: %f\n",limit_credits);
		printf("balance: %f\n",balance+costs-credits);
		printf("limit credits exceeded\n");
	}
	while(number!=-1)
	{
		printf("Enter number of check(-1,if enter ended): ");
		scanf("%d",&number);
		if(number==-1)
			break;
		printf("Enter balance: ");
		scanf("%f",&balance);
		printf("Enter costs: ");
		scanf("%f",&costs);
		printf("Enter credits: ");
		scanf("%f",&credits);
		printf("Enter limit credits: ");
		scanf("%f",&limit_credits);
		if(balance+costs-credits>limit_credits)
		{
			printf("check: %d\n",number);
			printf("limit credits: %f\n",limit_credits);
			printf("balance: %f\n",balance+costs-credits);
			printf("limit credits exceeded\n");
		}

	}
	return 0;
}
