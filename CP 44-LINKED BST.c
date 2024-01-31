 #include<stdio.h>
#include<stdlib.h>
 struct node
 {
 int data;
 struct node* left;
 struct node* right; 	
 };
 struct node*creatNode(int data)
 {
 	struct node*n;//creating a node pointer
 	n=(struct node*)malloc(sizeof(struct node));//Allocating memory in the heap
 	n->data=data;//setting the data;
 	n->left=NULL;//setting the left and right children to null
 	n->right=NULL;//setting the left and right children to null
 	return 0;//finally returing the created node
 }
 void main()
 {/*/construction of root node
 	struct node*p;
 	p=(struct node*)malloc(sizeof(struct node));
 	p->left=NULL;
 	p->right=NULL;
 	
 	//construction of 1 node
 	struct node*p1;
 	p1=(struct node*)malloc(sizeof(struct node));
 	p1->left=NULL;
 	p1->right=NULL;
 	
 	//construction  2 node
 	struct node*p2;
 	p2=(struct node*)malloc(sizeof(struct node));
 	p2->left=NULL;
 	p2->right=NULL;
 	
 	//linking of roort node to the left p1 and p2 as right
 	p->left=p1;
 	p->right=p2;
 	return 0;*/
 	//construction of root node

 	struct node*p=creatNode(2);
 	struct node*p1=creatNode(3);
 	struct node*p2=creatNode(4);
 	p->left=p1;
 	p->right=p2;
 }
