#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	puts("First call to each function:");
	staticArrayInit();
	automaticArrayInit();
	puts("\n\nSecond call to each function:");
	staticArrayInit();
	automaticArrayInit();	
	return 0;
}

//function show local static array
void staticArrayInit(void)
{
	static int array1[3];
	int i;
	puts("\nValues on entering staticArrayInit:");
	for(i=0;i<=2;i++)
	{
		printf("array1[%d] = %d ",i,array1[i]);	
	}
	puts("\nValues on exiting staticArrayInit:");
	//modify and puts array1
	for(i=0;i<=2;i++)
	{
		printf("array[%d] = %d ",i,array1[ i ] +=5);
	}
	
}

void automaticArrayInit(void)
{
	int array2[3]={1,2,3};
	int i;
	puts("\n\nValues on entering automaticArrayInit:");

	for(i=0;i<=2;i++)
	{
		printf("array2[%d] = %d ",i,array2[i]);	
	}

	puts("\nValues on exiting automaticArrayInit:");
	//modify and print array
	for(i=0;i<=2;i++)
	{
		printf("array2[%d]=%d ",i,array2[i]+=5);	
	}
}
