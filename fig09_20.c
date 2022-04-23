#include <stdio.h>

int main()
{
	char x;
	char y[9];
	setbuf(stdout,NULL);
	printf("%s","Enter a string");
	scanf("%c%s",&x,y);
	puts("The input was:");
	printf("the character \"%c\" ",x);
	printf("and the string \"%s\" ",y);
	return 0;
}
