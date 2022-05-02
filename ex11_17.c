/*
 *simpletron	
 *simpletron has got accumulator
 */

#include<stdio.h>

#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define	HALT 43

int main()
{
	int a,b,c;
	int go=1;
	int accamulator = 0;
	int instructionCounter=0;
	int instructionRegister=0;
	int operandCode=0;
	int operand=0;
	fflush(stdout);
	setbuf(stdout,NULL);
	int memory[1000]={0};
	printf("Welcome to simpletron!\n");
	printf("enter program step by step\n");
	FILE* fp = fopen("program.pr","r");
	while(1)
	{
		//printf("%02d? ",operand);
		fscanf(fp,"%d",&memory[operand]);
		if(memory[operand]==-99999)
			break;
		operand++;
	}
	fclose(fp);
	while(go)
	{
		instructionRegister=memory[instructionCounter];
		operandCode=instructionRegister/100;
		operand=instructionRegister%100;
		if(instructionRegister==-99999)
			break;
		switch(operandCode)
		{
			case READ:
				switch(operand)
				{
					case 7:
						printf("enter to register a: ");
						scanf("%d",&a);
						break;
						
					case 8:
						printf("enter to register b: ");
						scanf("%d",&b);
						break;
						
					case 9:
						printf("enter to register c: ");
						scanf("%d",&c);
						break;
						
				}
				break;
			case WRITE:
				switch(operand)
				{
					case 7:
						printf("a has got: %d\n",a);
						break;

					case 8:
						printf("b has got: %d\n",b);
						break;

					case 9:
						printf("c has got: %d\n",c);
						break;
				}
				break;
			case LOAD:
				switch(operand)
				{
					case 7:
						accamulator=a;
						break;

					case 8:
						accamulator=b;
						break;

					case 9:
						accamulator=c;
						break;
				}
				break;
			case STORE:
				switch(operand)
				{
					case 7:
						a=accamulator;
						break;

					case 8:
						b=accamulator;
						break;

					case 9:
						c=accamulator;
						break;
				}
				break;
			case SUBTRACT:
				switch(operand)
				{
					case 7:
						accamulator-=a;
						break;

					case 8:
						accamulator-=b;
						break;

					case 9:
						accamulator-=c;
						break;
				}
				break;
			case DIVIDE:
				switch(operand)
				{
					case 7:
						if(a==0)
						{
							printf("a equal to zero,error!\n");
							go=0;
							continue;
						}
						accamulator/=a;
						break;

					case 8:
						if(b==0)
						{
							printf("b equal to zero,error!\n");
							go=0;
							continue;
						}
						accamulator/=b;
						break;

					case 9:
						if(c==0)
						{
							printf("c equal to zero,error!\n");
							go=0;
							continue;
						}
						accamulator/=c;
						break;
				}
				break;

			case MULTIPLY:
				switch(operand)
				{
					case 7:
						accamulator*=a;
						break;
					case 8:
						accamulator*=b;
						break;
					case 9:
						accamulator*=c;
						break;

				}
			break;
			case BRANCH:
				instructionCounter=operand;
			break;
			case BRANCHNEG:
				if(accamulator<0)
					instructionCounter=operand;			   break;
			case BRANCHZERO:
				if(accamulator==0)
					instructionCounter=operand;
			break;
			case HALT:
				go=0;
				break;
			case ADD:
				switch(operand)
				{
					case 7:
						accamulator+=a;
						break;
					case 8:
						accamulator+=b;
						break;
					case 9:
						accamulator+=c;
						break;

				}
			break;
		}

		instructionCounter++;
	}
	return 0;
}
