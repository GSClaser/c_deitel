//program for asking of student
#include <stdio.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11
//function main is start of the program
int main(void)
{
	int answer;
	int rating;
	//init counter by zero
	int frequency[FREQUENCY_SIZE]={0};
	//put answer of student in array of response
	int responses[RESPONSE_SIZE]={1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10};
	//for every responce get value of array element responce and use it as index of array freqvency and use it for define element for uncrease
	for(answer=0;answer<RESPONSE_SIZE;answer++)
	{
		++frequency[responses[answer]];
	}
	//put result
	printf("%s%17s\n","Rating","Frequency");
	//put frequency as table
	for(rating=1;rating<FREQUENCY_SIZE;rating++)
	{
		printf("%6d%17d\n",rating,frequency[rating]);	
	}
	return 0;
}
