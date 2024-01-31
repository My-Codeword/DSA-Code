#include<stdio.h>
void element(int a[100],int n)
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
void main()
{
	int a[100],n,i;
	printf("Enter the number of element in array\n");
	scanf("%d",&n);
	element(a,n);

}
