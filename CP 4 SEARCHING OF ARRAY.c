/*#include<stdio.h>
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
int search(int a[100], int num)
{
	int i;
	int n;
	int c,p;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			c=1;
			p=i+1;
			break;
		}
	}
	
	if(c==0)
	{
		printf("***** %d Number not found*****\n",num);
	}
	else
	{
	printf("**** %d Number found at index %d********\n",num ,p);	
	}
}
void main()
{
	int a[100],n,i;
	int c=0,p;
	int num;
	printf("Enter the number of element in array\n");
	scanf("%d",&n);
	Element(a,n);
	printf("Enter the number to be search\n");
	scanf("%d",&num);
	search(a,num);
}*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],x,index,j;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
int i;
for(i=0;i<=n–1;i++)
{
printf("Enter a value:");
scanf("%d"
,&a[i]);
}
printf("Enter the element to be deleted:");
scanf("%d"
,&x);
for(i=0;i<=n–1;i++)
{
if(x==a[i])
{
for(j=i;j<=n-2;j++)
{
a[j]=a[j+1];
}
n--;
}
}
printf("New array is:\n");
for(i=0;i<=n-1;i++)
{
printf("%d\n"
,a[i]);
}
getch();
}

