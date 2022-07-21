#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
	int value;
	struct Node* next;
};

void addValue(struct Node** list,int value);
void printReverse(struct Node** reverseList,struct Node* list);
void print(struct Node* reverseList);

int main()
{
	struct Node* list=NULL;
	struct Node* reverseList=NULL;
	int value;
	int i;
	srand(time(NULL));
	for(i=1;i<=10;i++)
	{
		value=rand()%100;
		addValue(&list,value);
		printf("%d ",value);

	}
	puts("");
	printReverse(&reverseList,list);
	print(reverseList);
	puts("");
}

void addValue(struct Node** list,int value)
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
			struct Node* currentNode=NULL;
			struct Node* previosNode=NULL;
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
		puts("Can't allocate memory");
	}
}

void printReverse(struct Node** reverseList,struct Node* list)
{
	if(list!=NULL)
	{
		printReverse(reverseList,list->next);
		addValue(reverseList,list->value);
	}
}

void print(struct Node* reverseList)
{
	while(reverseList!=NULL)
	{
		printf("%d ",reverseList->value);
		reverseList=reverseList->next;
	}
}