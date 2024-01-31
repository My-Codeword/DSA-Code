// C PROGRAM FOR BUBBLE SORT.
#include<stdio.h>
void element(int *a,int n)
{int i;
for(i=0;i<n;i++)
	{	
	printf("\t %d\n",a[i]);
	
}
}

void bubblesort(int *a,int n)
{int temp, i,j;
	for(i=0;i<n-1;i++)//for number of pass
	{
		
		for(j=0;j<n-1-i;j++)//for comparison in each pass
		{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;	
	    }
		}
		
	}
}
int bubblesortAdptive(int *a,int n)
{int temp, i,j;
int issorted=0;
	for(i=0;i<n-1;i++)//for number of pass
	{
		 printf("\t WORKIG ON PASS NUMBER %d\n",i+1);
		issorted=1;
		for(j=0;j<n-1-i;j++)//for comparison in each pass
		{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		issorted=0;	
	    }
		}
		if(issorted)
		return 0;
	}
}
int main()
{   printf("\t ELEMENT FOR SORTING\n");
	int a[]={1,2,5,6,12,54,625,7,23,9,987};
    int n=11;
	element(a,n);//printing the array before sorting
    bubblesort(a,n);//function to sort array
    bubblesortAdpative(a,n);
     printf("\t SORTED ELEMENT IS::\n");
    element(a,n);//printing the array aftre sortig
    return 0;
}
