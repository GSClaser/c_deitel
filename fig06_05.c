//init element of array s even numbers from 2 to 20

#include <stdio.h>
#define SIZE 10

//function main start of run program
int main(void)
{
	int s[SIZE];//array in 10 elements
	int j;//counter
	for(j = 0;j<SIZE;j++)
	{
		s[j]=2+2*j;	
	}
	printf("%s%13s\n","Element","Value");
	//withdraw array s in table forman
	
	for(j = 0;j<SIZE;j++)
	{
		printf("%7d%13d\n",j,s[j]);	
	}
	return 0;
}
