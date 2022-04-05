#include <stdio.h>

int perfect(int n)
{
	int i;
	int sum=0;
	for(i=1;i<n;i++)
	{
		if(n/i*i==n)
			sum+=i;
	}
	if(sum == n)
		return 1;
	return 0;
}

int main()
{
	for(int i = 1;i<=1000;i++)
	{
		if(perfect(i))
			printf("%d\n",i);
	}
	return 0;
}
