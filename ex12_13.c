#include <stdio.h>
#include <ctype.h>

struct stackNode{
	int value;
	struct stackNode *next;
};

typedef struct stackNode StackNode;
typedef StackNode* StackNodePtr;

int evaluatePostfixExpression(char *expr);
int calculate(int op1,int op2,char operator);
void push(StackNodePtr *topPtr,int value);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr topPtr);
int isOperation(char c);

int main()
{
	char expr[]="6 2 + 5 * 8 4 / -";
	evaluatePostfixExpression(expr);
	return 0;
}

int evaluatePostfixExpression(char *expr)
{
	int i=0;
	int x,y;
	StackNodePtr stack=NULL;
	while(expr[i])
	{
		if(isdigit(expr[i]))
		{
			push(&stack,expr[i]);
		}
		if(isOperation(expr[i]))
		{
			x=pop(&stack)-'0';
			y=pop(&stack)-'0';
			push(&stack,calculate(y,x,expr[i])+'0');
		}
		i++;
	}
	printf("result=%d\n",pop(&stack)-'0');
}

int isOperation(char c)
{
	if(c=='*'||c=='/'||c=='+'||c=='-'||c=='^'||c=='%')
		return 1;
	return 0;
}
int calculate(int op1,int op2,char operator)
{
	int result=0;
	switch(operator)
	{
	case '+':
		result=op1+op2;
		break;
	case '-':
		result=op1-op2;
		break;
	case '*':
		result=op1*op2;
		break;
	case '/':
		result=op1/op2;
		break;
	case '^':
		result=pow(op1,op2);
		break;
	case '%':
		result=pow(op1,op2);
		break;
	}
	return result;
}
void push(StackNodePtr *topPtr,int value)
{
	StackNodePtr new_node=malloc(sizeof(StackNode));
	if(new_node!=NULL)
	{
		new_node->value=value;
		new_node->next=*topPtr;
		*topPtr=new_node;
	}
	else
	{
		puts("cannot allocate memory");
	}
}
int pop(StackNodePtr *topPtr)
{
	StackNodePtr temp;
	int value;
	temp = *topPtr;
	value = (*topPtr)->value;
	*topPtr=(*topPtr)->next;
	free(temp);
	return value;
}
int isEmpty(StackNodePtr topPtr)
{
	return topPtr==NULL;
}
void printStack(StackNodePtr topPtr)
{
	while(topPtr!=NULL)
	{
		printf("%d",topPtr->value);
		topPtr=topPtr->next;
	}
}