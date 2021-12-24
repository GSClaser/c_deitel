#include <stdio.h>
#include <time.h>
#define NUM 10000
#define SIZE 10
int main(void)
{
	int i;
	int money;
	int value[SIZE]={0};
	srand(time(NULL));
	
	for(i=0;i<NUM;i++)
	{
		money=200+(rand()%3000)*0.09;
		if(money>=201 && money<=299)
		{
			value[1]++;				
		}
		if(money>=300 && money<=399)
		{
			value[2]++;	
		}
		if(money>=400 && money<=499)
		{
			value[3]++;	
		}
		if(money>=500 && money<=599)
		{
			value[4]++;	
		}
		if(money>=600 && money<=699)
		{
			value[5]++;	
		}
		if(money>=700 && money<=799)
		{
			value[6]++;	
		}
		if(money>=800 && money<=899)
		{
			value[7]++;	
		}
		if(money>=900 && money<=999)
		{
			value[8]++;	
		}
		if(money>=1000)
		{
			value[9]++;	
		}
	}
	for(i=1;i<SIZE;i++)
	{
		printf("index = %d freq = %d\n",i,value[i]);
	}
	
	return 0;
}
