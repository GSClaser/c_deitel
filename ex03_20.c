#include <stdio.h>

int main()
{
	float principal;
	float rate;
	int days;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter sum of loan(-1,if enter ended): ");
	scanf("%f",&principal);
	printf("enter rate: ");
	scanf("%f",&rate);
	printf("enter days: ");
	scanf("%d",&days);
	printf("pay by usiall procent is: $%f\n\n",principal*rate*days/365);
	while(1)
	{
		printf("enter sum of loan(-1,if enter ended): ");
		scanf("%f",&principal);
		if((int)principal==-1)
			break;
		printf("enter rate: ");
		scanf("%f",&rate);
		printf("enter days: ");
		scanf("%d",&days);
		printf("pay by usiall procent is: $%f\n\n",principal*rate*days/365);
	}
	return 0;
}
