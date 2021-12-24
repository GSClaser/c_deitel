#include <stdio.h>

#define X 2
#define Y 5

int main()
{
	int a[Y][X]={{1,2},{3,4},{5,6},{7,8},{9,10}};
	int i,j,k;

	for(j=0;j<Y;j++)
	{
		for(i=0;i<X;i++)
		{
			printf("%d ",a[j][i]);
		}	
		puts("");
	}
	
}
