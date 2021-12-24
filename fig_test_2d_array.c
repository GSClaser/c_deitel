#include <stdio.h>

#define y 2
#define x 3

int main()
{
	int a[y][x]={{2,3,1},
		{1,3,6}};
	int i,j;
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);	
		}	
		printf("\n");
	}	
}
