#include <stdio.h>

int main()
{
	float aPrice = 2.98;
	float bPrice = 4.50;
	float cPrice = 9.98;
	float dPrice = 4.49;
	float fPrice = 6.87;
	int goods;
	int n;
	int i;
	fflush(stdout);
	setbuf(stdout,NULL);
	for(i = 1;i<=5;i++)
	{
		printf("Enter number of goods(1-5): ");
		scanf("%d",&goods);
		printf("Enter number of num of goods: ");
		scanf("%d",&n);
		switch(goods)
		{
			case 1:
				printf("price for goods: %f\n",aPrice*n);
				break;
			case 2:
				printf("price for goods: %f\n",bPrice*n);
				break;
			case 3:
				printf("price for goods: %f\n",cPrice*n);
				break;
			case 4:
				printf("price for goods: %f\n",dPrice*n);
				break;
			case 5:
				printf("price for goods: %f\n",fPrice*n);
				break;
			default:
				puts("wrong num of goods!");
				break;
				
		}
	}
	return 0;
}
