#include <stdio.h>

int main()
{
	int x;
	int y;
	setbuf(stdout,NULL);
	printf("%s","Enter a six digit integer: ");
	scanf("%2d%d",&x,&y);

	printf("The integers input were %d and %d\n",x,y);
	return 0;
}
