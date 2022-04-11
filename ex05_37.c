#include <stdio.h>

int power(int base,int exponent)
{
	if(exponent==0)
		return 1;
	return base*power(base,exponent-1);
}

int main()
{
	printf("%d\n",power(3,4));
	return 0;
}
