#include <stdio.h>

long int integerPower(int base,int exponent)
{
	int i;
	int n=1;
	for(i=1;i<=exponent;i++)
	{
		n=n*base;
	}
	return n;
}

int main()
{
	int base,exponent;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter number and exponent: ");
	scanf("%d%d",&base,&exponent);	
	printf("%li\n",integerPower(base,exponent));
	return 0;
}
