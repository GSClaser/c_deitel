#include <stdio.h>

void pow2(int value,int pow);
void print_digit(int value);

int main()
{
	int value=54;
	int pow=2;
	pow2(value,pow);
	return 0;
}

void pow2(int value,int pow)
{
	printf("%d\n",value);
	printf("%d\n",value<<pow);
	print_digit(value);
	print_digit(value<<pow);
}

void print_digit(int value)
{
	int mask=1<<31;
	int i;
	for(i=1;i<=32;i++)
	{
		putchar(mask&value?'1':'0');
		value<<=1;
		if(i%8==0) putchar(' ');
	}
	putchar('\n');
}
