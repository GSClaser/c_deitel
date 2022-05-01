#include <stdio.h>
#include <string.h>

int main()
{
	char string[80];
	char subchar='h';
	char* searchPtr=NULL;
	int count=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter string: ");
	gets(string);
	searchPtr=strchr(string,subchar);
        printf("%s\n",searchPtr);
	while(searchPtr!=NULL)
	{
		searchPtr=strchr(searchPtr+1,subchar);
		printf("%s\n",searchPtr);
		count++;
	}
	printf("count: %d\n",count);
	return 0;
}
