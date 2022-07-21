#include <stdio.h>

struct Node{
	int value;
	int index;
	struct Node* next;
};

int index=0;
void addValue(struct Node** node,int value);
void printNode(struct Node* node);
void concatenateNode(struct Node** node3,struct Node* node1,struct Node* node2);
void deleteNode(struct Node** node);
void sortArray(struct Node** node);
int getSize(struct Node* node);
int getElement(struct Node* node,int index);
void setElement(struct Node* node,int index,int value);

int main()
{
	struct Node* node1=NULL;
	struct Node* node2=NULL;
	struct Node* node3=NULL;

	addValue(&node1,1);
	addValue(&node1,3);
	addValue(&node1,5);

	index=0;

	addValue(&node2,2);
	addValue(&node2,4);
	addValue(&node2,6);

	index=0;

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
			(*node)->index=index;
			index++;
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
			newNode->index=index;
			index++;
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
	index=0;
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

int getSize(struct Node* node)
{
	int size=0;
	while(node!=NULL)
	{
		size++;
		node=node->next;
	}
	return size;
}

int getElement(struct Node* node,int index)
{
	while(node!=NULL||node->index==index)
	{
		if(node->index==index)
			break;
		node=node->next;
	}
	return node->value;
}

void setElement(struct Node* node,int index,int value)
{
	while(node!=NULL)
	{
		if(node->index==index)
			break;
		node=node->next;
	}
	node->value=value;
}

void sortArray(struct Node** node)
{
	int size=getSize(*node);
	int i,j,temp;
	int flag;
	for(i=0;i<size-1;i++)
	{
		flag=1;
		for(j=0;j<size-i-1;j++)
		{
			if(getElement(*node,j)>getElement(*node,j+1))
			{
				flag=0;
				temp=getElement(*node,j+1);
				setElement(*node,j+1,getElement(*node,j));
				setElement(*node,j,temp);
			}
		}
		if(flag)
			break;
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