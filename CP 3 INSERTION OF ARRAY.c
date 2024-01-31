//INSERTION IN ARRAY
#include<stdio.h>
int Element(int a[100],int n)
{
int i;
printf("Enter element of array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array element is\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
}
  int indexinsertion(int n,int ele,int a[100],int index)
    {
    if(n>=a[100])
	{
	return -1;
	printf("Insertion not possible");
	int i; 
	for(i=n-1;i>=index;i++)
	{
		a[i+1]=a[i];
	}
	a[index]=ele;
	return 1;
	}	
	
int main()
{
	int a[100],n,i,ele,index ;
	printf("Enter the number of element in array\n");
	scanf("%d",&n);
	Element(a,n);
	printf("Enter insertion element\n");
	scanf("%d",&ele);
	printf("Enter the position of  element to be insertion\n");
	scanf("%d",&index);
    indexinsertion(n,ele,100,index);
    return 0;
}
