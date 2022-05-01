#include<stdio.h>
#include<string.h>

int main()
{
	const char *string1="abcdefghijklmnopqrstuvwxyz";
	const char *string2="four";
	const char *string3="Boston";

	printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
			"The lenght of ", string1, " is ",
			(unsigned long) strlen(string1),
			"The lenght of ",string2, " is ",
			(unsigned long) strlen(string2),
			"The lenght of ",string3, " is ",
			(unsigned long) strlen(string3));

	return 0;
}
