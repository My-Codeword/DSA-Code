/* ALL STACK OPERATION USING ARRAY IN C  ,[ROLL NO .303]*/

#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1,val;
char data[100];
void push()//PUSHING THE ELEMENT
{
	char val;
	if(top==n)
	{
	printf("\t STACK OVERFLOW!! YOU CANNOT PUSH TO THE STACK\n");
	}
	else
	{
//	printf("\t ENTER THE STACK PUSH VALUE\n\t ");
//	scanf(" %c",&val);
	top=top+1;
	stack[top]=val;
    strcpy(stack[top],data);
	}
}
void pop()//POPING THE ELEMENT
{
	if(top==-1)
	{
	printf("\t STACK UNDERFLOW!! YOU CANNOT POP TO THE STACK\n");
	}
	else
	{
	top=top-1;
	}
}

int peek(int stack[])//RETURNS THE VALUE IF STACK TOP ELEMENT  
{
	if(top==-1)
	{
	printf("\t STACK IS EMPTY\n");
	return 0;
	}
	else
	{
	 return stack[top]; 
	}
}

void display()//DISPLAY THE ALL ELEMENT PRESENT IN STACK
{
	printf("\t STACK ELEMENT IS ::\n");
	for(i=top;i>=0;i--)
	{
	printf("%c",stack[i]);
	}
	if(top==-1)
	{
	printf("\t STACK IS EMPTY\n");
	
	}
}

void main()
{
	printf("\t ENTER THE NUMBER OF ELEMENT IN THE STACK\n\t ");
	scanf("%d",&n);
	printf("\t ***STACK OPERATION USING ARRAY***\n");
	do
	{
	printf("\t CHOSE ONE FROM THE BELOW OPTION\n");
	printf("\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT\n");
	printf("\t ENTER THE YOUR CHOICE\n\t ");
	scanf(" %d",&choice);
	switch(choice)
		{
			case 1:
				{
				    push();
			    	break;
				}
				case 2:
				{
					pop();
					printf("\t ELEMENT POPED\n");
					break;
				}
				case 3:
				{
					 val=peek(stack);
					 if(val!=-1)
				  {
				   	printf("\t THE VALUE STORED AT TOP OF STACK:: %c\n ",val);
				  }  
					break;
				}
				case 4:
				{
					display();
					break;
				}
				case 5:
				{
				    printf("\t YOU ARE EXITING \n");
					break;
				}
				default:
				{	
				printf("\t PLEASE ENTER THE VALID CHOICE\n");
			}
	   }
    }   while(choice!=5);
}






















