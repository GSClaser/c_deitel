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

void quicksort(int* arr,int len,int len2)
{	
	int count=len2;
	int temp;
	int i;
	if(len<0 || len2<0)
		return;
	if(len==len2)
		return;
	if(len2-len==1)
		return;
	printf("%d %d\n",len,len2);
	while(1)
	{
		if(arr[len]>arr[count])
		{
			temp=arr[count];
			arr[count]=arr[len];
			arr[len]=temp;
			break;
		}
		count=count-1;
	}
	i=count;
	while(1)
	{
		if(arr[count]<arr[i])
		{
			temp=arr[i];
			arr[i]=arr[count];
			arr[count]=temp;
			
			break;
		}
		i=i-1;
	}
	print(arr);
	
	quicksort(arr,len,count); 
	quicksort(arr,count,len2);

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
