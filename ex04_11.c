#include <stdio.h>

int main()
{
	int n;
	int min=0;
	int counter;
	int a;
	fflush(stdout);
	setbuf(stdout,NULL);
	scanf("%d",&n);
	for(counter=0;counter<n;counter++)
	{
		scanf("%d",&a);
		if(min>a||min==0)
			min=a;
	}
	printf("min= %d\n",min);
	return 0;
}
