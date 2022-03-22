#include <stdio.h>

int main()
{
	int number1,number2,number3;
	int min,max;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please enter three number\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	printf("Sum is %d\n",number1+number2+number3);
	printf("Average is %d\n",(number1+number2+number3)/3);
	printf("Product is %d\n",number1*number2*number3);
	min = number1;
	if(min>number2)
		min=number2;
	if(min>number3)
		min=number3;
	max = number1;
	if(max<number2)
		max=number2;
	if(max<number3)
		max=number3;
	printf("Smalles is %d\n",min);
	printf("Largest is %d\n",max);
}
