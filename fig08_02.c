#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%s\n%s%s\n%s%s\n\n","According to isdigit: ",
			isdigit('8')?"8 is a ":"8 is not a ","digit",
			isdigit('#')?"# is a ":"# is not a ","digit");
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","Accordint to isalpha: ",
			isalpha('A')?"A is a ":"A is not a ","letter",
			isalpha('a')?"a is a ":"a is not a ","letter",
			isalpha('&')?"& is a ":"& is not a ","letter",
			isalpha('4')?"4 is a ":"4 is not a ","letter");
	printf("%s\n%s%s\n%s%s\n%s%s\n\n","According to isalnum:",
			isalnum('A')?"A is a ":"A is not a ","digit or a letter",
			isalnum('8')?"8 is a ":"8 is not a ","digit or a letter",
			isalnum('#')?"# is a ":"# is not a ","digit or a letter");
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","According to isxdigit",
			isxdigit('F')?"F is a ":"F is not a ","hexamical digit",
			isxdigit('J')?"J is a ":"J is not a ","hexamical digit",
			isxdigit('7')?"7 is a ":"7 is not a ","hexamical digit",
			isxdigit('$')?"$ is a ":"$ is not a ","hexamical digit",
			isxdigit('f')?"f is a ":"f is not a ","hexamical digit");

	return 0;
}
