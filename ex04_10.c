#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	int counter=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	while(1)
	{
		scanf("%d",&n);
		if(n==9999)
			break;
		sum+=n;
		counter++;
	}
	printf("average= %f\n",(float)sum/counter);
	return 0;
	
}
