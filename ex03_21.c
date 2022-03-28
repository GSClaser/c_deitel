#include <stdio.h>

int main()
{
	int hours;
	float rate;
	float pay;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter # worked hours (-1,if enter ended): ");
	scanf("%d",&hours);
	printf("enter rate of worker: ");
	scanf("%f",&rate);
	if(hours<=40)
	{
		pay = hours*rate;
	}
	else
	{
		pay = 40*rate+(hours-40)*1.5*rate;
	}
	printf("pay: $%f\n\n",pay);
	while(1)
	{
		printf("enter # worked hours (-1,if enter ended): ");
		scanf("%d",&hours);
		if(hours==-1)
			break;
		printf("enter rate of worker: ");
		scanf("%f",&rate);
		if(hours<=40)
		{
			pay = hours*rate;
		}
		else
		{
			pay = 40*rate+(hours-40)*1.5*rate;
		}
		printf("pay: $%f\n\n",pay);
	}
}
