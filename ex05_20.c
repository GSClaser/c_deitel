#include<stdio.h>

void print(int side,char symbol)
{
	int i,j;
	for(i=1;i<=side;i++)
	{
		for(j=1;j<=side;j++)
		{
			printf("%c",symbol);
		}
		printf("\n");
	}
}

int main()
{
	int side;
	char symbol;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter side of cube and symbol: ");
	scanf("%d %c",&side,&symbol);
	print(side,symbol);
	return 0;
}
