#include <stdio.h>

int main()
{
	float pi = 3.14159;
	float radius;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter radius: ");
	scanf("%f",&radius);
	printf("Diameter = %f perimeter = %f area = %f\n",2*radius,2*pi*radius,pi*radius*radius);
	return 0;
}
