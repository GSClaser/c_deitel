#include <stdio.h>

int main(void)
{
	char z[9];
	setbuf(stdout,NULL);
	printf("%s","Enter the string: ");
	scanf("%[aeiou]",z);
	printf("The input was \"%s\"\n",z);
	return 0;
}
