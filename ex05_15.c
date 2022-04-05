#include <stdio.h>
#include <math.h>

double hypotenuse(double side1,double side2)
{
	return sqrt(side1*side1+side2*side2);
}
int main()
{
	double side1_1,side2_1,side1_2,side2_2,side1_3,side2_3;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter side1 and side2: ");
	scanf("%lf %lf",&side1_1,&side2_1);
	printf("Enter side1 and side2: ");
	scanf("%lf %lf",&side1_2,&side2_2);
	printf("Enter side1 and side2: ");
	scanf("%lf %lf",&side1_3,&side2_3);
	printf("triangle\tside1\tside2\thypotenuse\n");
	printf("%d\t%f\t%f\t%f\n",1,side1_1,side2_1,hypotenuse(side1_1,side2_1));
	printf("%d\t%f\t%f\t%f\n",1,side1_2,side2_2,hypotenuse(side1_2,side2_2));
	printf("%d\t%f\t%f\t%f\n",1,side1_3,side2_3,hypotenuse(side1_3,side2_3));
	return 0;
}
