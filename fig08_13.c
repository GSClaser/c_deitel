#include <stdio.h>

void reverse(const char * const sPtr);
int a=0;
int main()
{
	fflush(stdout);
	setbuf(stdout,NULL);
	char sentence[80];
	puts("Enter a line of text");
	gets(sentence);
	puts("\nThe line printed backward is:");
	reverse(sentence);
	return 0;
}

void reverse(const char * const sPtr)
{
	if(sPtr[0]=='\0')
		return;
	else
	{
		reverse(&sPtr[1]);
		putchar(sPtr[0]);
	}
}
