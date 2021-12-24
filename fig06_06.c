//calculate sum of element of array
#include <stdio.h>
#define SIZE 12

//function main is start of program
int main(void)
{
	//use list for a initialisation
	int a[SIZE]={1,3,5,4,7,2,99,16,45,67,89,45};
	int i;
	int total = 0;//sum of array
	//summation of array content
	for(i = 0;i<SIZE;i++)
	{
		total+=a[i];	
	}
	printf("total of array elements values is %d\n",total);
	return 0;	

}
