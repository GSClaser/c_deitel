#include <stdio.h>

float minimum(float a,float b,float c)
{
	float temp = a;
	if(temp>b)
		temp = b;
	if(temp>c)
		temp = c;
	return temp;
}

int main()
{
	float a,b,c;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter a,b and c ");
	scanf("%f%f%f",&a,&b,&c);
	printf("minimum is %f\n",minimum(a,b,c));
	return 0;
}
