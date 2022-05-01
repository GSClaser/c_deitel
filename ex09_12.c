#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	setbuf(stdout,NULL);
	printf("Please,enter the string: ");
	scanf("%s",str);
	printf("len of string %d\n",strlen(str));
	return 0;
}
