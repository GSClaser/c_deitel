#include <stdio.h>
#include <string.h>

int main(void)
{
	char x[]="Happy Birthday to You";
	char y[25];
	char z[15];
	printf("%s%s\n%s%s\n",
			"The string in array x is: ",x,
			"The string in array y is: ",strcpy(y,x));
	strncpy(z,x,14);
	z[14]='\0';
	printf("The string in array z is %s\n",z);
	return 0;
}
