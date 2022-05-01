#include <stdio.h>
#include <string.h>

int main()
{
	char ch;
	int i;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter symbol: ");
	scanf("%c",&ch);
	printf("symbol is: %d",ch);
	for(i=0;i<255;i++)
	{
		printf("%3d %c\n",i,i);
	}
	return 0;
}
