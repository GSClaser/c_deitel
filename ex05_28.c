#include <stdio.h>

void function_reverse(int number)
{
	int a,b,c,d,e;
	int sum=0;
	a=number/10000;
	b=(number-a*10000)/1000;
	c=(number-a*10000-b*1000)/100;
	d=(number-a*10000-b*1000-c*100)/10;
	e=(number-a*10000-b*1000-c*100-d*10);
	printf("%d %d %d %d %d\n",a,b,c,d,e);
	if(a!=0)
		sum=a+10*b+100*c+1000*d+10000*e;
	if(a==0&&b!=0)
		sum=b+10*c+100*d+1000*e;
	if(a==0&&b==0&&c!=0)
		sum=c+10*d+100*e;
	if(a==0&&b==0&&c==0&&d!=0)
		sum=d+10*e;
	if(a==0&&b==0&&c==0&&d==0&&e!=0)
		sum=e;
	printf("sum: %d\n",sum);
}

int main()
{
	int number;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter the number: ");
	scanf("%d",&number);
	function_reverse(number);
	return 0;
}
