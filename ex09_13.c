#include <stdio.h>
#include <string.h>
#define N 5

int main()
{
	int i;
	int a[N]={12,22,33,44,55};
	printf("celsius\t\tfahrenheit\n");
	for(i=0;i<N;i++)
	{
		printf("%8d\t%8f\n",a[i],5.0/9.0*(a[i]-32));
	}
	return 0;
}
