#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,j,k,q;
	int count;
	char sentence[80];
	char* article[5]={"the","a","one","some","any"};
	char* noun[5]={"boy","girl","dog","town","car"};
	char* verb[5]={"drove","jumped","ran","walked","skipped"};
	char* preposition[4444]={"to","from","over","on"};
	srand(time(0));
	for(count=0;count<20;count++)
	{
		i=rand()%4;
		j=rand()%4;
		k=rand()%4;
		q=rand()%4;
		sprintf(sentence,"%s %s %s %s",article[i],noun[j],verb[k],preposition[q]);

		printf("%s\n",sentence);
	}
	return 0;
}
