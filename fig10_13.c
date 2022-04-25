#include <stdio.h>

void displayBits(unsigned value);

int main()
{
	unsigned number1 = 960;

	puts("\nThe result of left shifting");
	displayBits(number1);
	printf("%s","8 bit positions using the ");
	puts("left shift operator << is");
	displayBits(number1 << 8);

	puts("\nThe result of right shifting");
	displayBits(number1);
	printf("%s","8 bit positions using the ");
	puts("right shift operator >> is");
	displayBits(number1 >> 8);
	return 0;
}


void displayBits(unsigned value)
{
	unsigned c;

	unsigned displayMask = 1<<31;

	printf("%10u = ",value);

	for(c=1;c<=32;c++)
	{
		putchar(value & displayMask?'1':'0');
		value <<=1;
		if(c%8==0)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
