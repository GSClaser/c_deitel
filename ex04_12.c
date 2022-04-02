#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i = 2;i<=30;i+=2)
	{
		sum=sum+i;
	}
	printf("sum= %d\n",sum);
}
