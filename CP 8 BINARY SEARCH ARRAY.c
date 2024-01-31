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

int binarysearch(int a[],int n,int element)
int low,mid,high;
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==element)
{
	return mid;
	}	
if(a[mid]<element)
{
	low=mid+1;
}
else{
	high=mid-1;
}
}
return 0;
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
    int searchindex=binarysearch(a,n,element);
    printf("the element %d was found at index  %d\n",element,searchindex);
    return 0;
}
