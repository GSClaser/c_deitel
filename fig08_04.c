#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("",
			"According to isspace:",
			"Newline",isspace('\n'):" is a ":" is not a ",
			"whitespace character",
			"Horizontal tab",isspace('\t'):" is a ":" is not a ",
			"whitespace character",
			isspace('%'
	return 0;
}
