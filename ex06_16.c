#include<stdio.h>

int main(void)
{
	int sales[3][5]={0};
	int row;
	int column;
	for(row=0;row<=2;row++)
		for(column=0;column<=4;column++)
			sales[row][column]=0;
	return 0;
}
