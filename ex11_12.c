#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hardware
{
	int id;
	char instrument[20];
	int numbers;
	double price;
};

int main()
{
	FILE* fp;
	struct hardware Hardware={0,"",0,0.0};
	int i;
	char ch[100];
	char* tok=NULL;
	char temp[100];
	int counter;
	int flag;
	int flag2;
	if((fp=fopen("hardware.dat","w"))==NULL)
	{
		puts("No data");	
	}
	else
	{
		for(i=0;i<100;i++)
		{
			fwrite(&Hardware,sizeof(struct hardware),1,fp);	
		}
		rewind(fp);	
		//for(i=0;i<=1;i++)
		{
			printf("Enter 5 nodes about node,name,number and price:\n");
			gets(ch);
			counter=0;
			flag=0;
			flag2=0;
			tok=strtok(ch," ");
			if(isdigit(tok[0]))
			{
				Hardware.id=atoi(tok);
				counter++;
			}
			while(tok!=NULL)
			{	
				if(!isdigit(tok[0]))
				{
					strcat(Hardware.instrument,tok);
					strcat(Hardware.instrument," ");
					flag=1;
				}
				if(isdigit(tok[0])&&counter==2&&flag2==1)
				{
					Hardware.price=atof(tok);
				}
				if(isdigit(tok[0])&&counter==1&&flag==1)
				{
					Hardware.numbers=atoi(tok);
					counter++;
					flag2=1;
				}	
					
				
				
				tok=strtok(NULL," ");
			}
			printf("%d %s %d %f\n",Hardware.id,Hardware.instrument,Hardware.numbers,Hardware.price);
			//fprintf(fp,"%d %s %d %f",&Hardware.id,Hardware.instrument,&Hardware.numbers,&Hardware.price);
		}
	}
	fclose(fp);
	return 0;
}
