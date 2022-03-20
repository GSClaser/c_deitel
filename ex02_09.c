#include <stdio.h>

int main()
{
	int a,b,c;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter two numbers\n");
	scanf("%d%d",&b,&c);
	a=b*c;
	printf("pay for work = %d\n",a);
	return 0;
}
