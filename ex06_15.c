#include <stdio.h>
#include <time.h>
#define SIZE 20
#define FREQ 90

int main(void)
{
	int i;
	int arr[SIZE]={0};
	int freq[FREQ]={0};
	srand(time(NULL));
	for(i=0;i<SIZE;i++)
	{
		arr[i]=10+rand()%90;	
		printf("Array arr[%d]=%d\n",i,arr[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		freq[arr[i]-10]++;	
	}
	for(i=0;i<SIZE;i++)
	{
		if(freq[arr[i]-10]>1)
		{
			printf("returned arr[%d]=%d\n",i,arr[i]);	
		}	
	}
	return 0;
}
