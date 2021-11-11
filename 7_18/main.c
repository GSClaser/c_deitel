#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

int main()
{
	
	printf("Welcome to simpletron!\n");
	printf("Please,enter you program,by one command!\n");
	printf("or word by data per once.I will get by\n");
	printf("help current address and quation sign(?).Entered\n");
	printf("by your words pushed by address.for finsih\n");
	printf("press number -99999\n");
	fflush(stdout);
	int go=1;
	int instructionCounter=0;
	char memory[7][50];
	while(go)
	{
		printf("%02d? ",instructionCounter);
		fflush(stdout);
		scanf("%s",memory[instructionCounter]);
		if(!strcmp(memory[instructionCounter],"-99999"))
		{
			go = 0;
			break;	
		}
		instructionCounter++;	
	}
	
	return 0;
}



					
