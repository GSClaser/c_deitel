#include <stdio.h>

int qualityPoints(int value)
{
	if(value>90)
		return 4;
	if(value>80)
		return 3;
	if(value>70)
		return 2;
	if(value>60)
		return 1;
	return 0;
}

int main()
{
	int value;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter value between 0-100: ");
	scanf("%d",&value);
	printf("grade: %d\n",qualityPoints(value));	
	return 0;
}
