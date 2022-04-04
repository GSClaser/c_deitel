#include <stdio.h>
#include <math.h>

int fl(float f)
{
	return floor(f+.5);
}

int main()
{
	float num1,num2,num3;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter number: ");
	scanf("%f",&num1);
	printf("enter number: ");
	scanf("%f",&num2);
	printf("enter number: ");
	scanf("%f",&num3);
	printf("%d %f %d %f %d %f\n",fl(num1),num1,fl(num2),num2,fl(num3),num3);
	return 0;
}
