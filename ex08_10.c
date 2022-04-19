#include <stdio.h>
#include <string.h>

int main()
{
	char ch[80];
	char ch2[80];
	int n;
	fflush(stdout);
	setbuf(stdout,NULL);
	puts("Enter two string");
	gets(ch);
	gets(ch2);
	puts("Enter number");
	scanf("%d",&n);
	if(strncmp(ch,ch2,n)==0)
		printf("ch1=ch2\n");
	if(strncmp(ch,ch2,n)==-1)
		printf("ch1<ch2\n");
	if(strncmp(ch,ch2,n)==1)
		printf("ch1>ch2\n");
	return 0;
}
