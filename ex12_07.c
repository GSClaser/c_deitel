#include <stdio.h>

struct Node{
	int value;
	struct Node* next;
};

void addValue(struct Node** node,int value);
void printNode(struct Node* node);
void concatenateNode(struct Node** node3,struct Node* node1,struct Node* node2);
void deleteNode(struct Node** node);
void sortArray(struct Node** node);

int main()
{
	struct Node* node1=NULL;
	struct Node* node2=NULL;
	struct Node* node3=NULL;

	addValue(&node1,1);
	addValue(&node1,3);
	addValue(&node1,5);

	addValue(&node2,2);
	addValue(&node2,4);
	addValue(&node2,6);

	printNode(node1);
	puts("");
	printNode(node2);
	puts("");

	concatenateNode(&node3,node1,node2);

	printNode(node3);
	puts("");
	printNode(node1);
	puts("");
	printNode(node2);
	puts("");

	deleteNode(&node1);
	deleteNode(&node2);
	deleteNode(&node3);
}


void addValue(struct Node** node,int value)
{
	struct Node* newNode=malloc(sizeof(struct Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=NULL;
		if(*node==NULL)
		{
			newNode->next=*node;
			*node=newNode;
		}
		else
		{
			struct Node* previosNode=NULL;
			struct Node* currentNode=NULL;
			currentNode=*node;
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
		puts("cannot allocate memory");
	}
}
void printNode(struct Node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->value);
		node=node->next;
	}
}
void concatenateNode(struct Node** node3,struct Node* node1,struct Node* node2)
{
	while(node1!=NULL)
	{
		addValue(node3,node1->value);
		node1=node1->next;
	}
	while(node2!=NULL)
	{
		addValue(node3,node2->value);
		node2=node2->next;
	}
	sortArray(node3);
}

void sortArray(struct Node** node)
{
	struct Node* temp=NULL;
	
	struct Node* node2=*node;
	struct Node* node3=*node;
	struct Node* previos=*node;

	while(node3!=NULL)
	{
		node2=node3;
		while(node2!=NULL)
		{
			if(node2->value > previos->value)
			{
				temp=node2->next;
				node2->next=previos;
				previos->next=temp;
			}
			previos=node2;
			node2=node2->next;
			puts("");
			printNode(*node);
			puts("");
		}
		
		node3=node3->next;
		

	}
}

void deleteNode(struct Node** node)
{
	struct Node* temp;
	while(*node!=NULL)
	{
		temp=*node;
		*node=(*node)->next;
		free(temp);
	}
}