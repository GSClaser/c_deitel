#include <stdio.h>
#include <string.h>

void func(char* ch,char* str)
{
	char* ch2=NULL;
	ch2=strstr(ch,str);
	while(ch2!=NULL)
	{
		printf("%s\n",ch2);
		if(!strcmp(ch2,str))
		{
			printf("%s",ch);
		}
		ch2=strstr(ch2+1,str);
	}
	
}

int main()
{
	char *str = "ED";
	char ch[]="hello world";
	char ch2[]="hello ED";
	func(ch,str);
	func(ch2,str);
	return 0;
}
