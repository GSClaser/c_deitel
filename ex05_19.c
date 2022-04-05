#include<stdio.h>

void print(int side)
{
	int i,j;
	for(i=1;i<=side;i++)
	{
		for(j=1;j<=side;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int side;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter side of cube: ");
	scanf("%d",&side);
	print(side);
	return 0;
}
