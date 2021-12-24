#include <stdio.h>
#define SIZE 10
void static_array()
{
	static int a[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);
	puts("");
}
int main(void)
{
	static_array();
	return 0;
}
