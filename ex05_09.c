#include <stdio.h>
float calclualateCharges(float hours)
{
	if(hours<3)
		return 2;
	if(hours>3 && hours<20)
		return 2+(hours-3)*0.5;
	if(hours>20)
		return 10;
}
int main()
{
	float num1,num2,num3;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Hours: ");
	scanf("%f",&num1);
	printf("Hours: ");
	scanf("%f",&num2);
	printf("Hours: ");
	scanf("%f",&num3);
	printf("%s\t%s\t%s\n","Car","Hours","Charge");
	printf("%d\t%f\t%f\n",1,num1,calclualateCharges(num1));
	printf("%d\t%f\t%f\n",2,num2,calclualateCharges(num2));
	printf("%d\t%f\t%f\n",3,num3,calclualateCharges(num3));
	printf("%s\t%f\t%f\n","Total",num1+num2+num3,calclualateCharges(num1)+calclualateCharges(num2)+calclualateCharges(num3));
	return 0;
}
