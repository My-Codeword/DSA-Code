
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int roll;
	char Name;
	char Dept;
	int Markes;
	struct node*next;
};
//shead =(struct node*)malloc(sizeof(struct node));
node*head=new node();
bool check(int x)
{
	if(head==NULL)
	{	
	return 1;
    }
    else
    {
    	node*head=(struct node*)malloc(sizeof(struct node));
	}
}
while(t!=NULL)
{
	if(t->roll==x)
	{
		return true;
		t=t->next;
	}
	else
	{
		return false;
	}
}
void inseart_record(int roll,string name,string Dept,int Markes)
{
	if(check(roll))
	{
		printf("\t STUDENT RECORD\n");
		return 0;	
	}
	else
	{
		node*head=new node();
		t->roll=roll;
		t->name=name;
		t->Dept=Dept;
		t->Marks=Marks;
		t->next=NULL;
	}
	if(head==NULL||(head->roll>=t->roll))
	{
		t->head=head;
		head=t;
	}
	else
	{
		node*c=head;
		while(c->next!=NULL &&( c->next->roll<t->roll))
		{
			c=c->next;
		}
		t->next=c->next;
		c->next=t;
	}
	printf("\t RECORD INSERTED SUCCESSFULLY\n");
}

void show()
{
	node*p=head;
	pf(p==NULL)
	{
		printf("\t NO RECORD AVAILABLE!!\n");
	}
	else
	{
		printf("\t INDEX\t NAME\t COURS\t INDEX\n")
		while(p!=NULL)
		{
			printf("\t %d",p->roll);
			printf("\t %s",p->Name);
			printf("\t %s",p->Dept);
			printf("\t %d",p->Marks);
			p=p->next;
		}
	}
}
int main()
{
	head=NULL;
	string Name,Course;
	int Roll,Marks;
	while(true)
	{
		printf("\t 1. WELCOME TO STUDENT RECORD SYSTEM\n\t2.VIEW ALL STUDENT RECORD\n\t3.EXIT\n");
		printf("\t ENTER THE YOUR CHOICE\n");
		scanf("%s",choice);
		switch(choice)
		{
				case 1:
				{
				    printf("\t ENTER THE NAME OF STUDENT\n");
				    scanf("%s",Name);
				     printf("\t ENTER THE ROLL NUMBER OF STUDENT\n");
				    scanf("%d",&Roll);
				     printf("\t ENTER THE Course OF STUDENT\n");
				    scanf("%s",Course);
				     printf("\t ENTER THE NAME OF STUDENT\n");
				    scanf("%d",&Marks);
			    	break;
				}
				case 2:
				{
					show();
					break;
				}
				case 3:
				{
					case 3:
					printf("\t EXIT\n");
					break;
				}
					default:
					{
						printf("\t PLEASE ENTER THE VALID CHOICE\n");
					 } 
		}
		
		
	}
}
