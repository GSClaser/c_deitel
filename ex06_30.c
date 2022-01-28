#include<stdio.h>
#define SIZE 1000

int main()
{
	int array[SIZE]={0};
	int i;
	int j;
	//init array by ones
	for(i = 0;i<SIZE;i++) 
	{
		array[i]=1;
	}
	for(i = 2;i<SIZE;i++)
	{
		for(j = i+1;j<SIZE;j++)//следующий элемент делим на предыдущие
		{
			if((j%i)==0)
			{
				array[j]=0;
			}
		}
	}
	for(i = 1;i<SIZE;i++)
	{
		if(array[i]==1) printf("%d\n",i);
	}
}