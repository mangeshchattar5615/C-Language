/**********************************************
 *  Student name:  
 *  Roll_no:
 *  Class:S.Y.B.sc(Comp-Sci)                Batch:
 *  Program no:6
 *  Program name:write c program implementation of sorting
 *                  algorithm using insertion sort.
 *                  **********************************************/
//Program 3.2 : Insertion Sort

#include <stdio.h>

int comp_count;
int main()
{
	int a[20],i,n;
	void insertion(int a[], int n);
	printf("\nHow many numbers :");
	scanf("%d",&n);
	printf("\nEnter the unsorted elements :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	insertion(a,n);
	printf("\nThe sorted list is :");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nThe total number of comparisons = %d", comp_count);
}

void insertion(int a[], int n)
{
  	int i,k,key;
	for(k=1;k<n;k++)
	{
		key = a[k];
		for(i=k-1;i>=0;i--)
		{
		   comp_count++;
		   if(a[i]>key)
		     a[i+1]=a[i]; /*make place for key */
		   else
			break;
		 }
		a[i+1]=key;  /* insert key */
	}	
}

/***************OUTPUT************************************
[ctbora@localhost ~]$ vi insertsort.c 
[ctbora@localhost ~]$ gcc insertsort.c 
[ctbora@localhost ~]$ ./a.out

How many numbers :4

Enter the unsorted elements :1 2 3 4

The sorted list is :1	2	3	4	
The total number of comparisons = 3[ctbora@localhost ~]$ 


********************************************************/

