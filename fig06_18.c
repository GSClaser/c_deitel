#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[],int key,int size);

int main(void)
{
	int a[SIZE];
	int x;
	int searchKey;
	int element;

	//make some data
	for(x=0;x<SIZE;x++)
	{
		a[x]=2*x;	
	}
	puts("Enter integer search key:");
	scanf("%d",&searchKey);
	//try find searchKey in array a
	element=linearSearch(a,searchKey,SIZE);

	if(element!=-1)
	{
		printf("Found value in element %d\n",element);	
	}
	else
	{
		puts("Value not found");	
	}
	return 0;
}

int linearSearch(const int array[],int key,int size)
{
	int n;
	for(n=0;n<size;++n)
	{
		if(array[n]==key)
		{
			return n;	
		}	
	}
	return -1;
}
