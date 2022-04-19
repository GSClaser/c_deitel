#include <stdio.h>
#include <string.h>

int main()
{
	const char *s = "This is a string";
	printf("%s\'%c\'%s\"%s\"\n",
			"The remainder of a after character",'r',
			" is found is ",memchr(s,'r',16));
	return 0;
}
