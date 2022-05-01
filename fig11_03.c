#include <stdio.h>

int main(void)
{
	int account;
	char name[30];
	double balance;

	FILE *cfPtr;
	setbuf(stdout,NULL);
	setbuf(stdin,NULL);
	if((cfPtr=fopen("clients.dat","w"))==NULL)
	{
		puts("File could not be open");
	}
	else
	{
		puts("Enter the account,name, and balance.");
		puts("Enter EOF to end input.");
		printf("%s","? ");
		scanf("%d%s%lf",&account,name,&balance);
		while(!feof(stdin))
		{
			fprintf(cfPtr,"%d %s %.2f\n",account,name,balance);
			printf("%s","? ");
			scanf("%d%s%lf",&account,name,&balance);
		}
		fclose(cfPtr);
	}
	return 0;
}
