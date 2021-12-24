#include <stdio.h>
#include <time.h>
#define LEN 36000
#define FREQ 12
int main(void)
{
	int value;
	int value2;
	int i;
	int fr[FREQ]={0};
	srand(time(NULL));
	for(i=0;i<LEN;i++)
	{	
		value=1+rand()%5;
		value2=1+rand()%5;
		value+=value2;
		fr[value]++;
	}
	printf("%s%13s\n","Value","Frequency");
	for(i=2;i<FREQ;i++)
	{
		printf("%d%13d\n",i,fr[i]);		
	}
	return 0;
}
