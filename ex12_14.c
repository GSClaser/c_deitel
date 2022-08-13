#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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
	char expr[]="30 20 4 / +";
	evaluatePostfixExpression(expr);
	return 0;
}

int evaluatePostfixExpression(char *expr)
{
	int i=0,j;
	int x,y;
	StackNodePtr stack=NULL;
	char ch[20]={0};
	int result,ret;
	int sum,sum2,sum3,count,count2,count3;
	push(&stack,'$');
	
	while(expr[i])
	{
		if(isdigit(expr[i]))
		{
			push(&stack,expr[i]-'0');
		}
		if(expr[i]==' ')
		{
			push(&stack,'$');
		}
		if(isOperation(expr[i]))
		{
			pop(&stack);
			sum = 0;
			count = 0;
			sum2 = 0;
			count2 = 0;
			while(topStack(stack)!='$')
			{
				sum+=(pop(&stack))*pow(10,count);
				count++;
			}
			pop(&stack);
			while(topStack(stack)!='$')
			{
				sum2+=(pop(&stack))*pow(10,count2);
				count2++;
			}
			result = calculate(sum2,sum,expr[i]);
			ret=sprintf(ch,"%d",result);
			for(j=0;j<ret;j++)
			{
				push(&stack,ch[j]-'0');
			}
		}
		i++;
	}
	count3=0;
	sum3=0;
	while(topStack(stack)!='$')
	{
		sum3+=(pop(&stack))*pow(10,count3);
		count3++;
	}
	pop(&stack);
	printf("result=%d\n",sum3);
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

int topStack(StackNodePtr topPtr)
{
	return topPtr->value;
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