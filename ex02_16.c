#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val1;
	int val2;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Please,enter two numbers\n");
	scanf("%d%d",&val1,&val2);
	printf("%d\n",val1+val2);
	printf("%d\n",val1*val2);
	printf("%d\n",val1-val2);
	printf("%d\n",val1/val2);
	printf("%d %d\n",abs(val1),abs(val2));
}
