#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,y;
	int z;
	int win;
	int lost;
	fflush(stdout);
	setbuf(stdout,NULL);
	srand(time(0));
	x=rand()%9+1;
	y=rand()%9+1;
	while(1)	
	{
		win=rand()%4;
		lost=rand()%4;
		printf("How much is %d times %d?: ",x,y);
		scanf("%d",&z);
		if(x*y==z)
		{
			switch(win)
			{
			case 0:
				printf("Very well!\n");
				break;
			case 1:
				printf("Exellent!\n");
				break;
			case 2:
				printf("Nice work!\n");
				break;
			case 3:
				printf("Keep up the good work!\n");
				break;
			}
			break;
		
		}
		else
		{
			
			switch(lost)
			{
			case 0:
				printf("No. Please try again\n");
				break;
			case 1:
				printf("Wrong. Try once more\n");
				break;
			case 2:
				printf("Don't give up!\n");
				break;
			case 3:
				printf("No. Keep trying\n");
				break;
			}
		
		}	
	}
	return 0;
}
