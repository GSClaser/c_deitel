#include <stdio.h>

struct person
{
	char lastName[15];
	char firstName[15];
	char age[2];
};

int main()
{
	int i;
	FILE* fp;
	if((fp=fopen("nameage.dat","w"))==NULL)
	{
		puts("No info");	
	}
	else
	{
		struct person Person={"","","0"};
		for(i = 0;i<100;i++)
		{
			fwrite(&Person,sizeof(struct person),1,fp);
		}
		/*
		for(i = 0;i<10;i++)
		{
			printf("enter last name,firstname,and age:\n");
			scanf("%s %s %s",Person.lastName,Person.firstName,Person.age);
			fscanf(fp,"%s %s %s",Person.lastName,Person.firstName,Person.age);
		}
		*/
	}
	fclose(fp);
	fp=fopen("nameage.dat","w");
	fclose(fp);
	return 0;
}
