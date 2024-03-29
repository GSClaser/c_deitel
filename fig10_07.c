#include <stdio.h>

void displayBits(unsigned value);

int main()
{
	unsigned x;
	setbuf(stdout,NULL);
	printf("%s","enter an unsigned integer: ");
	scanf("%u",&x);
	displayBits(x);
	return 0;
}

void displayBits(unsigned value)
{
	unsigned c;
	unsigned displayMask = 1<<31;
	printf("%10u = ",value);
	for(c=1;c<=32;c++)
	{
		putchar(value&displayMask?'1':'0');
		value<<=1;
		if(c%8==0)
			putchar(' ');
	}
	putchar('\n');
}
