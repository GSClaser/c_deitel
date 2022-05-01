#include <stdio.h>

int main()
{
	int request;
	int account;
	double balance;
	char name[30];
	FILE *cfPtr;

	if((cfPtr=fopen("clients.dat","r"))==NULL)
	{
		puts("File could not be opened");
	}
	else
	{
		printf("%s","Enter request\n",
				" 1 - List accounts with zero balances\n",
				" 2 - List accounts with credit balances\n",
				" 3 - List accounts with debit balances\n",
				" 4 - End of run\n? ");
		scanf("%d",&request);
		while(request!=4)
		{
			fscanf(cfPtr,"%d%s%lf",&account,name,&balance);
			switch(request)
			{
				case 1:
					puts("\nAccounts with zero balances:");
					while(!feof(cfPtr))
					{
						if(balance == 0)
						{
							printf("%-10d%-13s%7.2f\n",account,name,balance);
						}
						fscanf(cfPtr,"%d%s%lf",&account,name,&balance);
					}
					break;
				case 2:
					puts("\nAccounts with credit balances:");

					while(!feof(cfPtr))
					{
						if(balance == 0)
						{
							printf("%-10d%-13s%7.2f\n",account,name,balance);
						}
						fscanf(cfPtr,"%d%s%lf",&account,name,&balance);
					}
					break;
				case 3:
					puts("\nAccounts with debit balances:");
					
					while(!feof(cfPtr))
					{
						if(balance == 0)
						{
							printf("%-10d%-13s%7.2f\n",account,name,balance);
						}
						fscanf(cfPtr,"%d%s%lf",&account,name,&balance);
					}
					break;
			}
			rewind(cfPtr);
			printf("%s","\n? ");
			scanf("%d",&request);
		}
		puts("End of run.");
		fclose(cfPtr);

	}
	return 0;
}
