#include <stdio.h>
int main()
{
	int i,j;
	int n;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter number from 1 to 19: ");
	scanf("%d",&n);
	for(i = 1;i<n;i+=2)
	{
		for(j = 0;j<(n-i)/2;j++)
		{
			printf(" ");
		}
		for(j = 0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i-=2)
	{
		for(j=(n-i)/2;j>0;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
