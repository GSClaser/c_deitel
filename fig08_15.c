#include <stdio.h>

int main()
{
	char s[80];
	int x;
	double y;
	fflush(stdout);
	setbuf(stdout,NULL);
	puts("Enter an integer and a double:");
	scanf("%d%lf",&x,&y);
	sprintf(s,"integer:%6d\ndouble:%8.2f",x,y);
	printf("%s\n%s\n",
			"The formatted output stored in array s is",s);
	return 0;
}
