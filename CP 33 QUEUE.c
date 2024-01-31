#include<stdio.h>
#include<stdlib.h>
 
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
 
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}
 
int main(){
    struct queue q;
    q.size = 20;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    int i,n,element;
    printf("Enter total element for enqueue\n");
    scanf("%d",&n);
    do
    {	printf("Enter the enqueue element\n");
    	scanf("%d",&element);
		enqueue(&q, element);	 
	} while(q.r!=n);
	printf("DEQUING ELEMENT %d\n",dequeue(&q));
	printf("DEQUING ELEMENT %d\n",dequeue(&q));
	printf("DEQUING ELEMENT %d\n",dequeue(&q));
    if(isEmpty(&q))
	{
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}
