#include <stdio.h>

int main()
{
	int i,j,n;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter 5 number(from 1 to 30)\n");
	for(i=1;i<=5;i++)
	{
		printf("number %d: ",i);
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
