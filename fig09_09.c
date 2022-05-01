#include <stdio.h>

int main()
{
	int i = 873;
	double f = 123.94536;
	char s[]="Happy Birthday";

	puts("Using precision for integers");
	printf("\t%.4d\n\t%.9d\n\n",i,i);

	puts("Using precision for floating-point numbers");
	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n",f,f,f);

	puts("Using precision for string");
	printf("\t%.11s\n",s);

	return 0;
}
