#include <stdio.h>

int main()
{
	unsigned int sum = 0;
	unsigned int number;

	for( number = 2; number <=100;number+=2)
	{
		sum+=number;
	}
	printf("sum = %d\n",sum);
	return 0;
}
