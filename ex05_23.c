#include <stdio.h>

int main()
{
	int hours,minutes,seconds;
	int our_seconds;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("Enter hours,minutes and seconds: ");
	scanf("%d%d%d",&hours,&minutes,&seconds);
	if(hours<12)
	{
		hours=24-hours;
	}
	our_seconds = 3600*hours+60*minutes+seconds-12*3600;
	printf("%d\n",our_seconds);
}
