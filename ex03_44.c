#include <stdio.h>

int main()
{
	float a,b,c;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c)
	{
		printf("this is a triangle\n");
	}
	return 0;
}
