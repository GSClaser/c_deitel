#include <stdio.h>
#include <math.h>

int roundToInteger(float number)
{
	return floor(number+.5);
}

float roundToTenths(float number)
{
	return floor(number*10+.5)/10;
}

float roundToHundreds(float number)
{
	return floor(number*100+.5)/100;
}

float roundToThousandths(float number)
{
	return floor(number*1000+.5)/1000;
}

int main()
{
	float number;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter float number: ");
	scanf("%f",&number);
	printf("%f %d %f %f %f\n",number,roundToInteger(number),roundToTenths(number),roundToHundreds(number),roundToThousandths(number));
	return 0;
}
