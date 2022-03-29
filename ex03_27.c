#include <stdio.h>

int main()
{
	int max;
	int max2;
	int enter;
	int counter=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter number: ");
	scanf("%d",&enter);
	max=enter;
	max2=enter;
	while(counter<=10)
	{
		printf("enter number: ");
		
		scanf("%d",&enter);
		if(max<enter)
		{
			max=enter;
		}
		if(max2<enter&&enter!=max)
		{
			max2=enter;
		}	
		counter=counter+1;
	}
	printf("max = %d max2 = %d\n",max,max2);
	return 0;
}
