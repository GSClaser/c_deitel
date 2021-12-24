#include <stdio.h>
#define SIZE 10

int main(void)
{
	//init array n
	int n[SIZE]={19,3,15,7,11,9,13,5,17,1};
	int i;
	int j;
	printf("%s%13s%17s\n","Element","Value","Histogram");
	//put column for every element of array n
	for(i=0;i<SIZE;i++)
	{
		printf("%7d%13d    ",i,n[i]);	
		for(j=1;j<=n[i];j++)
		{
			printf("%c",'*');	
		}
		puts("");
	}
	return 0;
	
}
