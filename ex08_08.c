#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,c,d;
	char ch[20];
	char ch2[20];
	char ch3[20];
	char ch4[20];
	fflush(stdout);
	setbuf(stdout,NULL);
	puts("enter float number");
	gets(ch);
	gets(ch2);
	gets(ch3);
	gets(ch4);
	a=atof(ch);
	b=atof(ch2);
	c=atof(ch3);
	d=atof(ch4);
	a*=2;
	b*=2;
	c*=2;
	d*=2;
	printf("2*a+2*b+2*c+2*d: %f\n",a+b+c+d);
	return 0;
}
