#include <stdio.h>

struct clientData
{
	int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};

int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

int main(void)
{
	FILE *cfPtr;
	int choice;
	if((cfPtr = fopen("credit.dat","rb+"))==NULL)
	{
		puts("File could not be opened.");	
	}
	else
	{
		while((choice = enterChoice())!=5)
		{
			switch(choice)
			{
				case 1:
					textFile(cfPtr);
				break;	
				case 2:
					updateRecord(cfPtr);
				break;
				case 3:
					newRecord(cfPtr);
				break;
				case 4:
					deleteRecord(cfPtr);
				break;
				default:
					puts("Incorrect choice");
				break;
				
			}	
		}	
		fclose(cfPtr);
	}
	return 0;
}

void textFile(FILE *readPtr)
{
	FILE *writePtr;
	struct clientData cleint = {0,"","",0.0};
	if((writePtr = fopen("accounts.txt","w"))==NULL)
	{
		puts("File could not be opened.");	
	}
	else
	{
		rewind(readPtr);	
		fprintf(writePtr,"%-6s%-16s%-11s%10s\n",
				"Acct","Last Name","First Name","Balance");
		while(!feof(readPtr))
		{
			fread(&client,sizeof(struct clientData),1,readPtr);		
			if(client.acctNum!=0)
			{
				fprintf(writePtr,%-6d%-16s%-11s%10.2f\n",
					client.acctNum,client.lastName,
				client.firstName,client.balance);	
			}
		}
		fclose(writePtr);
	}
}
