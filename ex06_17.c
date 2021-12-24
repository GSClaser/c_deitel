#include <stdio.h>
#define SIZE 3

int whatIsThis(const int b[],int p);

int main(void)
{
	int x;
	int a[SIZE] = {1,2,3};
	x = whatIsThis(a,SIZE);
	printf("Result is %d\n",x);
	return 0;
}

int whatIsThis(const int b[],int p)
{
	if(p==1)
	{
		return b[0];	
	}
	else
	{
		return b[p-1] + whatIsThis(b,p-1);	
	}
}
