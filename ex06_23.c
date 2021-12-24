#include <stdio.h>
#define SIZE 50
void printArray(int floor[][SIZE]);
int main(void)
{
	int floor[SIZE][SIZE]={0};	
	int go=1;
	int command;
	int x=12;
	int y=12;
	int i;
	int direction=0;//down,1-right,2-up,3-left
	int pen=0;
	int data=0;
	while(go)
	{
		puts("Please,enter command(1(up pen)\n,2(down pen)\n,3(right turn)\n,4(left turn)\n,5(move/steps)\n,6(print)\n,9(exit)):");
		scanf("%d,%d",&command,&data);	
		//exit
		if(command==9)
		{
			go=0;	
		}
		//up pen
		if(command==1)
		{
			pen=0;	
		}
		//down pen
		if(command==2)
		{
			pen=1;		
			floor[x][y]=1;	
		}
		//right turn
		if(command==3)
		{
			if(direction<3)
				direction++;	
			else
				direction=0;
			printf("direction:%d\n",direction);
		}
		//left turn
		if(command==4)
		{
			if(direction==0)
				direction=3;
			else
				direction--;		
			printf("direction:%d\n",direction);
		}
		if(command==5)
		{
			if(pen)
			{
				if(direction==0)
				{
					for(i=0;i<data;i++)
					{
						floor[y+i][x]=1;
					}
					y+=data;
				}
				if(direction==1)
				{
					for(i=0;i<data;i++)
					{
						floor[y][x+i]=1;	
					}	
					x+=data;
				}
				if(direction==2)
				{
					for(i=0;i<data;i++)
					{
						floor[y-i][x]=1;
					}		
					y-=data;
				}
				if(direction==3)
				{
					for(i=0;i<data;i++)
					{
						floor[y][x-i]=1;	
					}
					x-=data;	
				}
			}
		}
		if(command==6)
		{
			printArray(floor);	
		}
	}
	return 0;
}


void printArray(int floor[][SIZE])
{
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%d ",floor[i][j]);
		}
		puts("");	
	}
}
