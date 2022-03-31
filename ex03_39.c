#include <stdio.h>

int main()
{
	int number;
	int num1,num2,num3,num4,num5;
	int counter=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please,enter number from 5 element\n");
	scanf("%d",&number);
	num1=number/10000;
	num2=(number-num1*10000)/1000;
	num3=(number-num1*10000-num2*1000)/100;
	num4=(number-num1*10000-num2*1000-num3*100)/10;
	num5=(number-num1*10000-num2*1000-num3*100-num4*10);
	printf("%d %d %d %d %d\n",num1,num2,num3,num4,num5);
	if(num1==7)
		counter++;
	if(num2==7)
		counter++;
	if(num3==7)
		counter++;
	if(num4==7)
		counter++;
	if(num5==7)
		counter++;
	printf("number 7 in enter number = %d\n",counter);
	return 0;
}
