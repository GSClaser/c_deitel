#include <stdio.h>

struct stackNode
{
	char value;
	struct stackNode* next;
};

typedef struct stackNode StackNode;
typedef StackNode * StackNodePtr;

void convertToPostfix(char infix[],char postfix[]);
int isOperator(char c);
int precedence(char operator1,char operator2);
void push(StackNodePtr *topPtr,char value);
char pop(StackNodePtr *topPtr);
char stackTop(StackNodePtr topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr topPtr);

enum operators{plus=0,minus=0,divide=1,multply=1,power=1,module=1};

int main()
{
	char infix[]="1-8/2+3";
	char postfix[100];
	printf("%s\n",infix);
	convertToPostfix(infix,postfix);
	precedence('/','+');
	
	return 0;
}

void convertToPostfix(char infix[],char postfix[])
{
	int i=0;
	int i2=0;
	int i3=0;
	char value;
	StackNodePtr stack=NULL;
	/*
	while(infix[i])
	{
		if(infix[i]=='('||infix[i]==')'||infix[i]=='*'||infix[i]=='/'||infix[i]=='+'||
			infix[i]=='%'||infix[i]=='^')
			push(&stack,infix[i]);

	}
	*/
	i=0;
	while(infix[i])
	{
		/*
		if(infix[i]=='(')
		{
			push(&stack,'(');
		}
		if(infix[i]==')')
		{
			while((value=pop(&stack))!='('&&!isEmpty(stack))
			{
				postfix[i2]=value;
				i2++;
			}
		}
		*/
		if(isOperator(infix[i]))
		{
			if(isEmpty(stack))
				push(&stack,infix[i]);
			while(!isEmpty(stack))
			{
				value=pop(&stack);
				if(precedence(value,infix[i])>=0)
				{
					postfix[i2]=value;
					i2++;
				}
				else
				{
					push(&stack,value);
				}
			}
			
		}
		if(isdigit(infix[i]))
		{
			postfix[i2]=infix[i];
			i2++;
		}
		i++;
	}
	postfix[i2]='\0';
	while(postfix[i3])
	{
		printf("%c",postfix[i3]);
		i3++;
	}
	puts("");
	printStack(stack);
}
int isOperator(char c)
{
	if(c=='+'||c=='-'||c=='/'||c=='*'||c=='%'||c=='^')
		return 1;
	else
		return 0;
}
int precedence(char operator1,char operator2)
{
	if(operator1=='+' && operator2=='+')
		return 0;
	if(operator1=='-' && operator2=='+')
		return 0;
	if(operator1=='*' && operator2=='+')
		return 1;
	if(operator1=='/' && operator2=='+')
		return 1;
	if(operator1=='%' && operator2=='+')
		return 1;
	if(operator1=='^' && operator2=='+')
		return 1;

	if(operator1=='+' && operator2=='-')
		return 0;
	if(operator1=='-' && operator2=='-')
		return 0;
	if(operator1=='*' && operator2=='-')
		return 1;
	if(operator1=='/' && operator2=='-')
		return 1;
	if(operator1=='%' && operator2=='-')
		return 1;
	if(operator1=='^' && operator2=='-')
		return 1;

	if(operator1=='+' && operator2=='*')
		return -1;
	if(operator1=='-' && operator2=='*')
		return -1;
	if(operator1=='*' && operator2=='*')
		return 0;
	if(operator1=='/' && operator2=='*')
		return 0;
	if(operator1=='%' && operator2=='*')
		return 0;
	if(operator1=='^' && operator2=='*')
		return 0;

	if(operator1=='+' && operator2=='/')
		return -1;
	if(operator1=='-' && operator2=='/')
		return -1;
	if(operator1=='*' && operator2=='/')
		return 0;
	if(operator1=='/' && operator2=='/')
		return 0;
	if(operator1=='%' && operator2=='/')
		return 0;
	if(operator1=='^' && operator2=='/')
		return 0;

	if(operator1=='+' && operator2=='%')
		return -1;
	if(operator1=='-' && operator2=='%')
		return -1;
	if(operator1=='*' && operator2=='%')
		return 0;
	if(operator1=='/' && operator2=='%')
		return 0;
	if(operator1=='%' && operator2=='%')
		return 0;
	if(operator1=='^' && operator2=='%')
		return 0;

	if(operator1=='+' && operator2=='^')
		return -1;
	if(operator1=='-' && operator2=='^')
		return -1;
	if(operator1=='*' && operator2=='^')
		return 0;
	if(operator1=='/' && operator2=='^')
		return 0;
	if(operator1=='%' && operator2=='^')
		return 0;
	if(operator1=='^' && operator2=='^')
		return 0;
	
	return 0;
}
void push(StackNodePtr *topPtr,char value)
{
	StackNodePtr newStack = malloc(sizeof(StackNode));
	if(newStack!=NULL)
	{
		newStack->value=value;
		newStack->next=*topPtr;
		*topPtr=newStack;
	}
	else{
		puts("can't allocate memory");
	}
}
char pop(StackNodePtr *topPtr)
{
	StackNodePtr temp;
	char value;
	temp = *topPtr;
	value=(*topPtr)->value;
	*topPtr=(*topPtr)->next;
	free(temp);
	return value;
}
char stackTop(StackNodePtr topPtr)
{

}
int isEmpty(StackNodePtr topPtr)
{	
	return topPtr==NULL;
}
void printStack(StackNodePtr topPtr)
{
	while(topPtr!=NULL)
	{
		printf("%c\n",topPtr->value);
		topPtr=topPtr->next;
	}
}
