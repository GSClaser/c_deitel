#include <stdio.h>
#include <string.h>

int main()
{
	char string[80];
	char substring[20];
	char* searchPtr=NULL;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter string and find string: ");
	scanf("%s %s",string,substring);
	searchPtr=strstr(string,substring);
        printf("%s\n",searchPtr);
	searchPtr=strstr(searchPtr+1,substring);
	printf("%s\n",searchPtr);
	return 0;
}
