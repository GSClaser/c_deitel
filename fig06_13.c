#include <stdio.h>
#define SIZE 5

void modifyArray(int b[],int size);
void modifyElement(int e);

int main(void)
{
	int a[SIZE]={0,1,2,3,4};
	int i;
	puts("Effects of passing entire array by reference:\n\nThe "
			"values of the origin array are:" );
	//put array
	for(i=0;i<SIZE;i++)
	{
		printf("%3d",a[i]);	
	}
	puts("");
	modifyArray(a,SIZE);
	puts("The values of the modified array are:");
	for(i=0;i<SIZE;i++)
	{
		printf("%3d",a[i]);	
	}
	printf("\n\n\nEffects of passing array elements "
			"by value:\n\nThe values of a[3] is %d\n",a[3]);
	modifyElement(a[3]);
	printf("The value of a[3] is %d\n",a[3]);
	return 0;
}

void modifyArray(int b[],int size)
{
	int j;
	for(j=0;j<size;j++)
	{
		b[j]*=2;	
	}
}

void modifyElement(int e)
{
	printf("Value in modifyElement id %d\n",e*=2);
}
