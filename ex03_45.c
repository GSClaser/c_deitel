#include <stdio.h>

int main()
{
	int a,b,c;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		printf("this is right triangle\n");
	}
	return 0;
}
