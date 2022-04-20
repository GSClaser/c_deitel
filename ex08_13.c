#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_pig_latin(const char* lex,char ch[],int len)
{
	int i;
	char temp=lex[0];
	char null='\0';
	printf("%d ",len);
	for(i = 1;i<len;i++)
	{
		ch[i-1]=lex[i];
	}
	ch[len-1]=temp;
	ch[len]='\0';
	strcat(ch,"ay");
//	printf("%s\n",ch);
//	printf("%c\n",temp);
//	ch[len+2]='\0';;
}

int main()
{
	const char ch[] = "put computer near of table";
	char *another_lex;
	char *lex = strtok(ch," ");
	char ch2[80];
	fflush(stdout);
	setbuf(stdout,NULL);
	while(lex!=NULL)
	{
		strcat(lex,"\0");
		convert_to_pig_latin(lex,ch2,strlen(lex));
		printf("%s\n",ch2);
		lex=strtok(NULL," ");
	}
	return 0;
}
