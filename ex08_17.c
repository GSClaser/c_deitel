#include <stdio.h>
#include <string.h>

int main()
{
	char string[80];
	char substring[20];
	char* searchPtr=NULL;
	int count=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter string and find string: ");
	scanf("%s %s",string,substring);
	searchPtr=strstr(string,substring);
        printf("%s\n",searchPtr);
	while(searchPtr!=NULL)
	{
		searchPtr=strstr(searchPtr+1,substring);
		printf("%s\n",searchPtr);
		count++;
	}
	printf("count: %d\n",count);
	return 0;
}
