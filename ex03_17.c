#include <stdio.h>

int main()
{
	float fuel;
	int distance;
	int counter=1;
	float original_fuel;
	float sum_fuel=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter fuel rate (-1,if end of entering): ");
	scanf("%f",&fuel);
	printf("Enter distance: ");
	scanf("%d",&distance);
	original_fuel = (float)distance/fuel;
	printf("fuel per distance miles/gallones %f\n",original_fuel);
	sum_fuel=sum_fuel+original_fuel;
	while((int)fuel!=-1)
	{
		printf("Enter fuel rate (-1,if end of entering): ");
		scanf("%f",&fuel);
		if((int)fuel==-1)
			break;
		printf("Enter distance: ");
		scanf("%d",&distance);
		original_fuel = (float)distance/fuel;
		sum_fuel=sum_fuel+original_fuel;
		printf("fuel per distance miles/gallones %f\n",original_fuel);
		counter=counter+1;
		
	}
	if(counter!=1)
	{
		printf("medium fuel = %f\n",sum_fuel/counter);
	}
	else
	{
		puts("you entered fuel only once!");
	}
}
