#include <stdio.h>

void displayBits(unsigned value);

int main()
{
	unsigned number1;
	unsigned number2;
	unsigned mask;
	unsigned setBits;

	number1 = 65535;
	mask=1;
	puts("The result of combining the following" );
	displayBits(number1);
	displayBits(mask);
	puts("using the bitwise AND operator & is");
	displayBits(number1&mask);

	number1 = 15;
	setBits = 241;
	puts("\n The result of combining the following");
	displayBits(number1);
	displayBits(setBits);
	puts("using the bitwise including OR operator | is");
	displayBits(number1|setBits);

	number1 = 139;
	number2 = 199;
	puts("\nThe result of combining the following");
	displayBits(number1);
	displayBits(number2);
	puts("using the bitwise exclusive OR operator ^ is");
	displayBits(number1^number2);


	number1 = 21845;
	puts("\nThe result of combining the following");
	displayBits(number1);
	puts("using the bitwise exclusive OR operator ^ is");
	displayBits(~number1);

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
