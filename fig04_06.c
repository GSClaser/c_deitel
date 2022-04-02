#include <stdio.h>
#include <math.h>

int main()
{
	float persent = 0.05;
	float dollars = 1000.0;
	int years = 10;
	int year;
	float sum=0;
	for(year=1;year<=years;year++)
	{
		sum=dollars*pow(1.0+persent,year);

		printf("dollars from 10 years = %f\n",sum);
	}
	return 0;
}
