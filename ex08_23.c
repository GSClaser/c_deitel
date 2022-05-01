#include <stdio.h>
#include <string.h>

void func(char* ch,char b_char)
{
	char* ch2=NULL;
	ch2=strchr(ch,b_char);
	while(ch2!=NULL)
	{
		printf("%s\n",ch2);
		if(!strcmp(ch2,"b"))
		{
			printf("%s",ch);
		}
		ch2=strchr(ch2+1,b_char);
	}
	
}

int main()
{
	char b_char = 'b';
	char ch[]="hello world";
	char ch2[]="hello blob";
	func(ch,b_char);
	func(ch2,b_char);
	return 0;
}
