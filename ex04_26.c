#include <stdio.h>
#include <math.h>

int main()
{
	float pi=0;
	float coef;
	int i,n=1000000;
	int counter=1;
	for(i=1;i<=n;i+=2)
	{
		if(counter%2)
			coef = 1;
		else
			coef = -1;
		pi = pi + coef*4.0/i;	
		printf("%d %f\n",i,pi);
		counter++;
	}
	return 0;
}
