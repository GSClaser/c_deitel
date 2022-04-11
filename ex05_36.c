#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number;
	int get_number;	
	int counter=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	printf("i have got number between 1 and 1000\n");
	printf("can you give this number?\n");
	printf("enter this number\n");
	srand(time(0));	
	number=rand()%999+1;
		
	while(1)
	{
		scanf("%d",&get_number);
		if(get_number==number)
		{
			printf("Very well!You are win!\n");
			break;
		}
		if(get_number<number)
			printf("number is greater\n");
		if(get_number>number)
			printf("number is lower\n");
		counter++;
	}
	if(counter<10)
		printf("if you know secret of you know number\n");
	if(counter==10)
		printf("you know secret\n");
	if(counter>10)
		printf("you can know quickly\n");
	return 0;
}
