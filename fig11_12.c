#include <stdio.h>

struct clientData
{
	int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};

int main()
{
	FILE *cfPtr;
	struct clientData client = {0,"","",0.0};
	if((cfPtr = fopen("credit.dat","rb+"))==NULL)
	{
		puts("File could not be opened.");
	}
	else
	{
		printf("%s","Enter account number"
				" ( 1 to 100, 0 to end input )\n? ");
		scanf("%d",&client.acctNum);
		while(client.acctNum!=0)
		{
			printf("%s","Enter lastname,firstname,balance\n");
			fscanf(stdin,"%s%s%lf",client.lastName,
					client.firstName,&client.balance);
			fseek(cfPtr,(client.acctNum - 1)*sizeof(struct clientData),SEEK_SET);
			fwrite(&client,sizeof(struct clientData),1,cfPtr);
			printf("%s","Enter account number\n? ");
			scanf("%d",&client.acctNum);
		}
		fclose(cfPtr);
	}
	return 0;
}
