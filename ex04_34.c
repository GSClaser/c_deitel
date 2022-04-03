#include <stdio.h>

int main()
{
	int number;
	int num1,num2,num3;
	int i;
	fflush(stdout);
	setbuf(stdout,NULL);
	for(i=1;i<=256;i++)
	{
		printf("%d: ",i);
		num1=i/100;
		num2=(i-num1*100)/10;
		num3=(i-num1*100-num2*10);
		printf("%d %d %d\n",num1,num2,num3);
		switch(num1)
		{
			case 0:
				printf("0000");
				break;
			case 1:
				printf("0001");
				break;
			case 2:
				printf("0010");
				break;
			case 3:
				printf("0011");
				break;
			case 4:
				printf("0100");
				break;
			case 5:
				printf("0101");
				break;
			case 6:
				printf("0110");
				break;
			case 7:
				printf("0111");
				break;
			case 8:
				printf("1000");
				break;
			case 9:
				printf("1001");
				break;
		}
		switch(num2)
		{
			case 0:
				printf("0000");
				break;
			case 1:
				printf("0001");
				break;
			case 2:
				printf("0010");
				break;
			case 3:
				printf("0011");
				break;
			case 4:
				printf("0100");
				break;
			case 5:
				printf("0101");
				break;
			case 6:
				printf("0110");
				break;
			case 7:
				printf("0111");
				break;
			case 8:
				printf("1000");
				break;
			case 9:
				printf("1001");
				break;
		}

		switch(num3)
		{
			case 0:
				printf("0000");
				break;
			case 1:
				printf("0001");
				break;
			case 2:
				printf("0010");
				break;
			case 3:
				printf("0011");
				break;
			case 4:
				printf("0100");
				break;
			case 5:
				printf("0101");
				break;
			case 6:
				printf("0110");
				break;
			case 7:
				printf("0111");
				break;
			case 8:
				printf("1000");
				break;
			case 9:
				printf("1001");
				break;
		}
		printf("\n");
		printf("%x %o\n",i,i);
	}
	return 0;
}
