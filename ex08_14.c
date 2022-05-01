#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* lex=NULL;
	char ch[80];
	char* ch2[3][80];
	int counter=0;
	int num1;
	long num2;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter number (xxx)xxx-xxxx: ");
	scanf("%s",ch);
	lex=strtok(ch,"()-");

	while(lex!=NULL)
	{
		//if(strcmp(lex,"")==0)
	//		continue;
		strcpy(ch2[counter],lex);
		printf("%s \n",lex);
		lex=strtok(NULL,"()-");
		counter++;
	}
	
	num1=atoi(ch2[0]);
	strcat(ch2[1],ch2[2]);
	num2=atol(ch2[1]);
	printf("%d %li\n",num1,num2);
	
//	printf("%s %s %s",ch2[0],ch2[1],ch2[2]);
}
