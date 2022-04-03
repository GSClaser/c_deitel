#include <stdio.h>

int main()
{
	int i,j,z;
	for(i=1;i<=500;i++)
	{
		for(int j = 1;j<=500;j++)
		{
			for(int z = 1;z<=500;z++)
			{
				if(i*i+j*j==z*z)
				{
					printf("side1 = %d side2 = %d hipotenuse = %d\n",i,j,z);
				}
			}
		}
	}
	return 0;
}
