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
  
 int main()
{
	int n,i;
	printf("ENTER THE TOTAL ELEMENT OF LINKED LIST\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	struct node*head;
	struct node*second;
 	struct node*third;
 	struct node*forth;
 	
 	//allocate memory for modes in the linked list in heap.
	head =(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));
	
	//link first and second nodes
	head->data=7;
	head->next=second;
	
	//link  second and thired nodes
	second->data=11;
	second->next=third;
	
	// terminted the list at the third node. 
	third->data=4;
	third->next=forth;
	
	forth->data=5;
	forth->next=NULL;
	
	linkedlisttraversal(head);
}
	return 0;
}
