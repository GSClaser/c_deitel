#include <stdio.h>

int main(void)
{
	char string1[20];
	char string2[]="string literal";
	int i;
	//read user string in array string
	printf("Enter a string: ");
	scanf("%s",string1);
	//put the strings
	printf("string1 is: %s\nstring2 is: %s\n"
			"string1 with spaces between character is:\n",
			string1,string2);
	//put string while not find zero symbol
	for(i = 0;string1[i]!='\0';i++)
	{
		printf("%c",string1[i]);	
	}
	puts("");
	return 0;
}
