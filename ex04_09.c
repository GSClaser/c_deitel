#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	int counter;
	int a;
	fflush(stdout);
	setbuf(stdout,NULL);
	scanf("%d",&n);
	for(counter=0;counter<n;counter++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	printf("sum= %d\n",sum);
	return 0;
}
