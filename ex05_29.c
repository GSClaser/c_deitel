#include <stdio.h>

int gcd(int number1,int number2)
{
	int i;
	int gcd;
	int min = number1;
	if(min>number2)
		min=number2;
	for(i=1;i<=min;i++)
	{
		if(number1/i*i==number1&&number2/i*i==number2)
		{
			gcd=i;
		}
	}
	return gcd;
}

int main()
{
	int number1,number2;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter two numbers: ");
	scanf("%d%d",&number1,&number2);
	printf("gcd: %d\n",gcd(number1,number2));
	return 0;
}
