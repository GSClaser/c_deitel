#include <stdio.h>

void tryToModifyArray(const int b[]);

int main(void)
{
	int a[]={10,20,30};
	tryToModifyArray(a);

}

void tryToModifyArray(const int b[])
{
	b[0]+=2;
	b[1]+=3;
	b[2]+=5;
}
