#include <stdio.h>

int main()
{
	int number;
	int num1,num2,num3,num4,num5;
	int temp;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please,enter number from 4 element\n");
	scanf("%d",&number);
	num1=number/1000;
	num2=(number-num1*1000)/100;
	num3=(number-num1*1000-num2*100)/10;
	num4=(number-num1*1000-num2*100-num3*10);
	printf("%d %d %d %d\n",num1,num2,num3,num4);
	num1=(num1+7)%10;
	num2=(num2+7)%10;
	num3=(num3+7)%10;
	num4=(num4+7)%10;
	temp = num1;
	num1 = num3;
	num3 = temp;
	temp = num2;
	num2 = num4;
	num4 = temp;
	printf("converted :");
	printf("%d %d %d %d\n",num1,num2,num3,num4);
	temp = num1;
	num1 = num3;
	num3 = temp;
	temp = num2;
	num2 = num4;
	num4 = temp;
	num1 = (num1+10-7)%10;
	num2 = (num2+10-7)%10;
	num3 = (num3+10-7)%10;
	num4 = (num4+10-7)%10;
	printf("unconverted: %d %d %d %d\n",num1,num2,num3,num4);
	return 0;
}
