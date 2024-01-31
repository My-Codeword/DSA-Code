#include<stdio.h>
#include<stdlib.h>

void array(int a[100],int n)
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

int linearsearch(int a[],int n,int element)
{
for(int i=0;i<n;i++)
{
    if(a[i]==element)
    {
        return i
		;
    }
}	
return -1;
}
int main()
{
    int a[100],n,i,element;
	printf("Enter the number of element in array\n");
	scanf("%d",&n);
	array(a,n);
	printf("Enter the element to be search\n");
	scanf("%d",&element);
    //int size=sizeof(a)/sizeof(int);
    //int element=1;
    int searchindex=linearsearch(a,n,element);
    printf("the element %d was found at index  %d\n",element,searchindex);
}
