#include <stdio.h>

int main()
{
	int n;
	int a=1;
	int counter=1;
	int counter2=1;
	float x;
	float exp=1;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter integer n and x(for exp(x)): ");
	scanf("%d",&n);
	scanf("%f",&x);
	while(counter<=n)
	{
		a=a*counter;
		counter=counter+1;
	}
	printf("n!= %d\n",a);
	while(counter2<=n)
	{
		a=1;
		counter=1;
		while(counter<=counter2)
		{
			a = a*counter;
			counter=counter+1;
			
		}
		exp=exp+1.0/a;
		counter2=counter2+1;

	}
	printf("exp= %f\n",exp);
	counter2=1;
	exp=1;
	while(counter2<=n)
	{
		a=1;
		counter=1;
		while(counter<=counter2)
		{
			a = a*counter;
			counter=counter+1;		
		}
		exp=exp+x/a;
		counter2=counter2+1;
		x=x*x;

	}
	printf("exp for x = %f\n",exp);
	return 0;
}
