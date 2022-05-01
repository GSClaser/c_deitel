#include <stdio.h>
#include <string.h>

int main()
{
	char ch[80];
	char ch2[80];
	fflush(stdout);
	setbuf(stdout,NULL);
	puts("Enter two strings");
	gets(ch);
	gets(ch2);
	switch(strcmp(ch,ch2))
	{
		case 0:
			puts("ch = ch2");
			break;
		case 1:
			puts("ch > ch2");
			break;
		case -1:
			puts("ch < ch2");
	}
	return 0;
}	
