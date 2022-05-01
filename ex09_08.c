#include <stdio.h>

int main()
{
	int x,y;
	setbuf(stdout,NULL);
	scanf("%i%d",&x,&y);
	printf("%d %d\n",x,y);
	return 0;
}
