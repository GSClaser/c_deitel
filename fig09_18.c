#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	setbuf(stdout,NULL);
	printf("%s","Enter seven integers: ");
	scanf("%d%i%i%i%o%u%x",&a,&b,&c,&d,&e,&f,&g);
	puts("The input displayed as decimal integers is:");
	printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,g);
	return 0;
}
