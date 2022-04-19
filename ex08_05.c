#include <stdio.h>
#include <string.h>

int main()
{
	fflush(stdout);
	setbuf(stdout,NULL);
	char c = getchar();
	printf("%s %s %s\n%s %s %s\n%s %s %s\n\n",
			"Character",isalpha(c)?"is":"is not","alpha",
			"Character",isalnum(c)?"is":"is not","alnum",
			"Character",isdigit(c)?"is":"is not","digit");
	return 0;
}
