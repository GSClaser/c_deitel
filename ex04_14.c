#include <stdio.h>

int main()
{
	int i,n=5;
	int mul=1;
	printf("i\tn\n");
	for(i=1;i<=n;i++)
	{
		mul*=i;	
		printf("%d\t%d\n",i,mul);
	}
	printf("factorial = %d\n",mul);
	return 0;
}
