#include <stdio.h>

int main()
{
	float pi = 3.14159;
	float radius;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please,enter the radius\n");
	scanf("%f",&radius);
	printf("diametr = %f\n",2*radius);
	printf("perimetr = %f\n",2*pi*radius);
	printf("square = %f\n",pi*radius*radius);
	return 0;
}
