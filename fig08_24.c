#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "The value is 3.14";
	const char *string2 = "1234567890";
	printf("%s%s\n%s%s\n\n%s\n%s%u",
			"string1 = ",string1,"string2 = ",string2,
			"The lenght of the initial segment of string1",
			"conteinted no characner from string2 = ",
			strcspn(string1,string2));
	return 0;	
}
