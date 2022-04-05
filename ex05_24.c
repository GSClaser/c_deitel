#include <stdio.h>

float fahrenheit(float temp)
{
	return 30+1.8*temp;
}

float celsius(float temp)
{
	return -30+temp/1.8;
}

int main()
{
	float temp;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter temperature by Celisum: ");
	scanf("%f",&temp);
	printf("temperature by fahrenheit: %f\n",fahrenheit(temp));	
	return 0;
}
