#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "The value is 3.14159";
	const char *string2 = "aehi lsTuv";
	printf("%s%s\n%s%s\n\n%s\n%s%u\n",
			"string1 = ",string1,"string2 = ",string2,
			"The lenght of the initial segment of string1",
			"containing only characters from string2 = ",
			strspn(string1,string2));
	return 0;
}
