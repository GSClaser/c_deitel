#include <stdio.h>
#include <math.h>

double hypotenuse(double side1,double side2);
int smallest(int x,int y,int z);
void instructions(void);
float intToFloat(int number);

int main()
{
	printf("hypotenuse: %lf\n",hypotenuse(3,4));
	printf("smallest: %d\n",smallest(3,4,5));
	instructions();
	printf("intToFloat: %f\n",intToFloat(5));
	return 0;
}


double hypotenuse(double side1,double side2)
{
	return sqrt(side1*side1+side2*side2);
}
int smallest(int x,int y,int z)
{
	int min = x;
	if(min>y)
		min=y;
	if(min>z)
		min=z;
	return min;
}
void instructions(void)
{
	printf("This is instructions\n");
}
float intToFloat(int number)
{
	return number;
}


