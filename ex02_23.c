#include <stdio.h>

int main()
{
	int num1,num2,num3,num4,num5;
	int max,min;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please enter 5 numbers\n");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	min = num1;
	if(min > num2)
		min = num2;
	if(min > num3)
		min = num3;
	if(min > num4)
		min = num4;
	if(min > num5)
		min = num5;
	max = num1;
	if(max < num2)
		max = num2;
	if(max < num3)
		max = num3;
	if(max < num4)
		max = num4;
	if(max < num5)
		max = num5;
	printf("min = %d max = %d\n",min,max);	

	return 0;

}
