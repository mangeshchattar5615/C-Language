/**********************************************
 *  Student name:  
 *  Roll_no:
 *  Class:S.Y.B.sc(Comp-Sci)                Batch:
 *  Program no:4
 *  Program name:write c program implementation of sorting
 *                  algorithm using bubble sort.
 * **********************************************/
//Program 3.1 :  Bubble Sort 

#include <stdio.h>

int comp_count, swap_count;
int main()
{
	int a[20], i, n;
	void bubblesort(int a[], int n);
	
	printf("\nHow many numbers? :");
	scanf("%d",&n);
	printf("\nEnter the unsorted elements :");
	for(i=0;i<n;i++)
  		scanf("%d",&a[i]);
	bubblesort(a,n);
	/** display **/
	printf("\nThe sorted list is :");
	for(i=0;i<n;i++)
     		printf("%d\t",a[i]);
		printf("\nThe total comparisons = %d",comp_count);
	printf("\nThe swap count = %d",swap_count);
}

void bubblesort(int a[10], int n)
{
	 int pass, i, temp;
	 for(pass=1;pass<n;pass++)
 	 for(i=0;i<=n-pass-1;i++)
  	 {
		comp_count++;
		if(a[i]>a[i+1])
		{
			swap_count++;
			temp=a[i]; 	
			a[i]=a[i+1]; 	
			a[i+1]=temp;
		} 
	}
}
/**************OUTPUT*******************************
[ctbora@localhost ~]$ vi bubbsort.c  
[ctbora@localhost ~]$ gcc bubbsort.c  
[ctbora@localhost ~]$ ./a.out

How many numbers? :4

Enter the unsorted elements :1 2 3 4

The sorted list is :1	2	3	4	
The total comparisons = 6
[ctbora@localhost ~]$ 
***************************************************/

