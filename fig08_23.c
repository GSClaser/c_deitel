#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *string = "This is a test";
	char character1='a';
	char character2='z';

	if(strchr(string,character1)!=NULL)
	{
		printf("\'a\' found in string \"%s\"\n",string);
	}
	else
	{
		printf("\'a\' was not found in string \"%s\"\n",string);
	}
	if(strchr(string,character2)!=NULL)
	{
		printf("\'z\' found in string \"%s\"\n",string);
	}
	else
	{
		printf("\'z\' was not found in string \"%s\"\n",string);
	}
	return 0;
	
}
