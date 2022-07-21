#include <stdio.h>

struct Stack
{
	char value;
	struct Stack* next;
};

void addStack(struct Stack** list,char value);
int isEmpty(struct Stack* stack);
void printStack(struct Stack* stack);

int main()
{
	char ch[50];
	int i=0;
	struct Stack* stack=NULL;
	printf("enter text: ");
	gets(ch);
	while(ch[i])
	{
		addStack(&stack,ch[i]);
		i++;
	}
	while(!isEmpty(stack))
	{
		printStack(&stack);
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

void printStack(struct Stack** stack)
{
	struct Stack* temp=*stack;
	printf("%c",(*stack)->value);
	*stack=(*stack)->next;
	free(temp);
}