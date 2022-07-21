#include <stdio.h>

struct Stack
{
	char value;
	struct Stack* next;
};

struct Node
{
	char value;
	struct Node* next;
};

void addStack(struct Stack** stack,char value);
int isEmpty(struct Stack* stack);
int printStack(struct Stack** stack,struct Node** list);
void addList(struct Node** list,char value);
void printList(struct Node* list);

int main()
{
	char ch[50];
	int i=0;
	struct Stack* stack=NULL;
	struct Node* list=NULL;
	int fail=0;
	printf("enter text: ");
	gets(ch);
	while(ch[i])
	{
		addStack(&stack,ch[i]);
		addList(&list,ch[i]);
		i++;
	}
	while(!isEmpty(stack))
	{
		if(printStack(&stack,&list))
		{
			fail=1;
			break;
		}
	}
	puts("");
	printList(list);
	puts("");
	if(!fail)
		printf("succes\n");
	else
		printf("fail\n");
}

void addList(struct Node** list,char value)
{
	struct Node* newList = malloc(sizeof(struct Node));
	if(newList!=NULL)
	{
		newList->value=value;
		newList->next=NULL;
		if(*list==NULL)
		{
			newList->next=*list;
			*list=newList;
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
			previosNode->next=newList;
			newList->next=currentNode;
		}
	}
	else
	{
		puts("can't allocate memory");
	}
}

void addStack(struct Stack** stack,char value)
{
	struct Stack* newStack = malloc(sizeof(struct Stack));
	if(newStack!=NULL)
	{
		newStack->value=value;
		newStack->next=*stack;
		*stack=newStack;
	}
	else
	{
		puts("can't allocate memory");
	}
}

int isEmpty(struct Stack* stack)
{
	return stack==NULL;
}

int printStack(struct Stack** stack,struct Node** list)
{
	struct Stack* temp=*stack;
	printf("%c",(*stack)->value);
	if((*list)->value!=(*stack)->value)
	{
		return 1;
	}
	*list=(*list)->next;
	*stack=(*stack)->next;
	free(temp);
	return 0;
}

void printList(struct Node* list)
{
	while(list!=NULL)
	{
		printf("%c",list->value);
		list=list->next;
	}
}