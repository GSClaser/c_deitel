#include <stdio.h>

int main()
{
	float sales;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter sum of sales (-1, if end): ");
	scanf("%f",&sales);
	printf("sales: $%.2f\n\n",200+0.09*sales);
	while((int)sales!=-1)
	{
		printf("enter sum of sales (-1, if end): ");
		scanf("%f",&sales);
		if((int)sales==-1)
			break;
		printf("sales: $%.2f\n\n",200+0.09*sales);
	}
	return 0;
}
