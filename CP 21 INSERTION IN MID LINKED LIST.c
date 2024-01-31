#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct node*prcv;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
 
struct node*insertATindex(struct node*head,int data,int index)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct node*p=head;
    
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->head=ptr->next;+
	ptr->next=p;
	return head;
 
}
 
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;
   printf("Circular Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertATindex(head, 54,1);
   // head = insertATindex(head, 58,2);
  //  head = insertATindex(head, 59,3);
    printf("Circular Linked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}

