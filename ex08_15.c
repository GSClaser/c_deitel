#include <stdio.h>
#include <string.h>

char ch[200];

void func(char* ch)
{
	char* lex;
	if(ch==NULL)
		return;
	else
	{
		lex=strtok(ch,NULL);
		printf("%s ",lex);
	}
}

int main()
{
	char* ch="hello cruel world";
	func(ch);
}
