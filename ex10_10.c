#include <stdio.h>
void digit(int a);
int main()
{
	int a = 1024;
	int b = a>>4;
	digit(a);
	digit(b);
	printf("%d %d\n",a,b);
	return 0;
}

void digit(int a)
{
	int k=1<<31;
	int i;
	for(i=1;i<=32;i++)
	{
		putchar(a&k?'1':'0');
		a<<=1;
		if(i%8==0)
			putchar(' ');
	}
	putchar('\n');
}
