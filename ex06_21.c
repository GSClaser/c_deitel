#include <stdio.h>
#include <time.h>
#define SIZE 10
int main(void)
{
	int value=0;
	int seat=0;
	int place[SIZE]={0};
	srand(time(NULL));
	while(value!=1 && value!=2)
	{
		printf("Please enter 1 for 'first class'");
		puts("");
		printf("Please enter 2 for 'econom class'");
		puts("");
		scanf("%d",&value);
	}
	if(value==1)
	{
		seat=1+rand()%4;	
	}
	if(value==2)
	{
		seat=6+rand()%4;	
	}
	place[seat]=1;
	printf("Your seat is: %d\n",seat);
	return 0;
}
