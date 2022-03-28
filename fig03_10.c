#include <stdio.h>

int main()
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int student = 1;
	int result;
	fflush(stdout);
	setbuf(stdout,NULL);
	while(student <=10)
	{
		printf("Enter result (1=pass,2=fail ): ");
		scanf("%d",&result);

		if(result==1)
		{
			passes = passes+1;
		}
		else
		{
			failures = failures+1;
		}
		student = student+1;
	}
	printf("Passes %d\n",passes);
	printf("Failures %d\n",failures);
	if(passes > 8)
	{
		puts("bonus to instructor");
	}
	return 0;
}
