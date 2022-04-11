#include <stdio.h>

void is_simple(int number)
{
	int flag=1;
	int i;
	for(i=2;i<=number-1;i++)
	{
		if(number/i*i==number)
		{
			printf("Number is composite\n");
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("Number is simple\n");
	}
}

void is_simple2(int number)
{
	int flag=1;
	int i;
	for(i=2;i<=number-1;i++)
	{
		if(number/i*i==number)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d\n",number);
	}
}

int main()
{
	int number;
	int i;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter the number: ");
	scanf("%d",&number);
	is_simple(number);
	for(i=0;i<1000;i++)
		is_simple2(i);
	return 0;
}
