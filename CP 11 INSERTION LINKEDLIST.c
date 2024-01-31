#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
void linkedlisttraversal(struct node*ptr)
{
  while(ptr!=NULL) 
{
  printf("Element : %d\n",ptr->data);
  ptr=ptr->next;
}
}
/*
struct node*insertATfirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
return ptr;
}
*/
struct node*insertATindex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node*p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;	
}  
 int main()
{
	struct node*head;
	struct node*second;
 	struct node*third;
 	
 	//allocate memory for modes in the linked list in heap.
	head =(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
	
	//link first and second nodes
	head->data=7;
	head->next=second;
	
	//link  second and thired nodes
	second->data=11;
	second->next=third;
	
	// terminted the list at the third node. 
	third->data=4;
	third->next=NULL;
	
	linkedlisttraversal(head); 
    /*CASE 1 :INSERTION IN BINGNING  head=insertATfirst(head, 45):
     printf("\n**********AFTER INSERTION IN LINKED IS**************\n");*/
    // head=linkedlistATfirst(head,56);
     head=insertATindex(head,12,1);
	linkedlisttraversal(head);
    return 0;
}

