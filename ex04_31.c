#include <stdio.h>
int main()
{
	int i,j;
	for(i = 1;i<10;i+=2)
	{
		for(j = 0;j<(10-i)/2;j++)
		{
			printf(" ");
		}
		for(j = 0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=9;i>=1;i-=2)
	{
		for(j=(10-i)/2;j>0;j--)
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
