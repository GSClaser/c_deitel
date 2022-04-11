#include <stdio.h>
int fibbonachi(int var)
{
	if(var == 0)
		return 0;
	if(var == 1)
		return 1;
	return fibbonachi(var-1)+fibbonachi(var-2);
}
int main()
{
	printf("%d\n",fibbonachi(10));
	return 0;
}
