#include <stdio.h>
#define SIZE 10
#define VALUE 15
#define ANOTHER_SIZE 12
#define ANOTHER_VALUE 5
int main()
{
	int counts[SIZE]={0};
	int bonus[VALUE]={0};
	int i;
	for(i=0;i<VALUE;i++)
	{
		bonus[i]++;	
	}
	float monthlyTemperatures[ANOTHER_SIZE]={0};
	for(i=0;i<ANOTHER_SIZE;i++)
	{
		printf("Enter value\n");
		scanf("%f",&monthlyTemperatures[i]);
	}	
	puts("Thanks");
	for(i=0;i<ANOTHER_SIZE;i++)
	{
		printf("%f ",monthlyTemperatures[i]);
	}
	puts("");
	int bestScores[ANOTHER_VALUE]={33,44,32,53,44};
	for(i=0;i<ANOTHER_VALUE;i++)
	{
		printf("%d ",bestScores[i]);
	}
	puts("");
}
