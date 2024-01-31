#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

void linkedlisttraversal(struct node*head)
{ struct node*ptr=head;
printf("Element : %d\n",ptr->data);
  ptr=ptr->next; 
  do
{
  printf("Element : %d\n",ptr->data);
  ptr=ptr->next;
}while(ptr!=head);//also write a while loop; 
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
	third->next=head;
	
	linkedlisttraversal(head);
	return 0;
}
