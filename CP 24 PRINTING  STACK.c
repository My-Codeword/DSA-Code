//STACK IMPLEMENTING USING ARRAY
#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int *a;
};

int Empty(struct stack *ptr)
{
if(ptr->top==-1)//condition for stack is empty if top ptr is =to -1.
{
	return 1; 
}
else
{
	return 0;
	}	
}

int isfull(struct stack *ptr)
{
if(ptr->top==ptr->size-1)/*condition stack is full if top ptr is =to total size of stack is value
less then original stack becaues stack index is start 0...Ex.1234 size:3*/   

{
	return 1; 
}
else
{
	return 0;
	}	
}
void main()
{
/*	struct stack s;
	s.size=80;
	s.top=-1;/*denotes that your stack is empty means index start at -1.
	and stacl is stack is fully empty*
	s.a=(int*)malloc(s.size*sizeof(int));*/
	
	//THIS WEY ALSO WEITE.
		struct stack *s;
	s->size=80;
	s->top=-1;/*denotes that your stack is empty means index start at -1.
	and stacl is stack is fully empty*/
	s->a=(int*)malloc(s->size*sizeof(int));
//check if stack is empty
s->a[0]=3;
s->top++;

if(Empty(s))
{
	printf("the stack is empty");
	}
	else
	{
	printf("the stack is not empty");
}
}
