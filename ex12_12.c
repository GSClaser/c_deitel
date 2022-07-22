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

int main()
{
	char infix[]="(6+2)*5-8/4";
	char postfix[100];
	convertToPostfix(infix,postfix);
	return 0;
}

void convertToPostfix(char infix[],char postfix[])
{
	int i;
	while(infix[i]!='\0')
	{
		printf("%d ",i);
		i++;
	}
}
int isOperator(char c)
{

}
int precedence(char operator1,char operator2)
{

}
void push(StackNodePtr *topPtr,char value)
{

}
char pop(StackNodePtr *topPtr)
{

}
char stackTop(StackNodePtr topPtr)
{

}
int isEmpty(StackNodePtr topPtr)
{

}
void printStack(StackNodePtr topPtr)
{

}
