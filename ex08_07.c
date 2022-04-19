#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char ch[20];
	char ch2[20];
	char ch3[20];
	char ch4[20];
	int a,b,c,d;
	fflush(stdout);
	setbuf(stdout,NULL);
	puts("enter some four integer number");
	gets(ch);
	gets(ch2);
	gets(ch3);
	gets(ch4);
	a=atoi(ch);
	b=atoi(ch2);
	c=atoi(ch3);
	d=atoi(ch4);
	printf("sum 4 number is %d\n",a+b+c+d);
	return 0;
}
