#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
	float value;
	struct Node* next;
};

void addValue(struct Node** list,float value);
void calculate(struct Node* list);

int main()
{
	int i;
	struct Node* list=NULL;
	srand(time(NULL));
	for(i=0;i<25;i++)
	{
		addValue(&list,100*rand()/(float)RAND_MAX);
	}
	calculate(list);
	return 0;
}

void addValue(struct Node** list,float value)
{
	struct Node* newNode=malloc(sizeof(struct Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=NULL;
		if(*list==NULL)
		{
			newNode->next=*list;
			*list=newNode;
		}
		else
		{
			struct Node* currentNode;
			struct Node* previosNode;
			currentNode=*list;
			while(currentNode!=NULL)
			{
				previosNode=currentNode;
				currentNode=currentNode->next;
			}
			previosNode->next=newNode;
			newNode->next=currentNode;
		}
	}
	else
	{
		puts("Cannot allocate memory");
	}
}

void calculate(struct Node* list)
{
	float sum=0;
	float i=0;
	while(list!=NULL)
	{
		sum+=list->value;
		i++;
		list=list->next;
	}
	printf("sum=%f\naverage=%f\n",sum,sum/i);
}