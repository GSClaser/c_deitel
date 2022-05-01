#include <string.h>
#include <stdio.h>

int main()
{
	char s1[17];
	char s2[]="Copy this string";

	memcpy(s1,s2,17);
	printf("%s\n%s\"%s\"\n",
			"After s2 is copied into s1 with memcpy,",
			"s1 contained ",s1);
	return 0;
}
