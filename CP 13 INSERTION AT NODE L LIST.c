
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

struct node*insertATafternode(struct node*head,struct node*prevnode,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
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
	
	printf("\nLINKED LIST BEFORE INSERTION \n");
linkedlisttraversal(head); 
head=insertATafternode(head,second,23);
printf("\nLINKED LIST AFTER  INSERTION \n");
linkedlisttraversal(head);
return 0;
}
