#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
	int i;
	int arr[N];
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		arr[i]=1+rand()%1000;
	}
	printf("Value\tTotal characters\n");
	for(i=0;i<N;i+=2)
	{
		printf("%d\t%d\n",arr[i],arr[i+1]);
	}
	return 0;
}
