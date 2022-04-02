#include <stdio.h>

int main()
{
	int i;
	int mul=1;
	for(i=1;i<=15;i+=2)
	{
		mul=mul*i;
	}
	printf("mul= %d\n",mul);
}
