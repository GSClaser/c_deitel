#include <stdio.h>

int main()
{
	double a;
	double b;
	double c;
	setbuf(stdout,NULL);	
	puts("Enter three floating-point numbers: ");
	scanf("%le%lf%lg",&a,&b,&c);

	puts("Here are the numbers  entered in plain");
	puts("floating-point notation:");
	printf("%f\n%f\n%f\n",a,b,c);
	return 0;
}
