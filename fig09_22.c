#include <stdio.h>

int main()
{
	char z[9];
	setbuf(stdout,NULL);
	printf("%s","Enter a string: ");
	scanf("%[^aeiou]",z); 
	printf("The input was \"%s\"\n",z);
}
