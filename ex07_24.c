#include <stdio.h>

void print(int* arr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int partition(int* arr,int len,int len2)
{
	int pivot = (arr[(len+len2)/2]);
	int temp;
	int i=len;
	int j=len2;
	while(1)
	{
		while(arr[i]<pivot)
			i=i+1;
		while(arr[j]>pivot)
			j=j-1;
		if(i>=j)
			return j;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}

void quicksort(int* arr,int len,int len2)
{	
	int p;
	if(len<len2)
	{
		p=partition(arr,len,len2);
		quicksort(arr,len,p);
		quicksort(arr,p+1,len2);
	}
}

int main()
{
	int i;
	int arr[]={37,2,6,4,89,8,10,12,68,45};
	int len=sizeof(arr)/sizeof(*arr)-1;
	int size=len;
	fflush(stdout);
	setbuf(stdout,NULL);
	
	quicksort(arr,0,len);
	printf("%d\n",len);
	for(i=0;i<=size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
