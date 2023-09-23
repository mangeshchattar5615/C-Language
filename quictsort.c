/**********************************************
 *  Student name:  
 *  Roll_no:
 *  Class:S.Y.B.sc(Comp-Sci)                Batch:
 *  Program no:7
 *  Program name:write c program implementation of sorting
 *                  algorithm using quick sort.
 * **********************************************/

//Program 3.4 : Quick Sort

#include <stdio.h>

void Quicksort( int a[], int lb, int ub)
{
	int j;
  if(lb < ub)
	{
		j= Partition(a,lb,ub);
		Quicksort(a,lb,j-1);
		Quicksort(a,j+1,ub);
	} 
}
int Partition( int a[], int lb, int ub)
{
	int up, dn;
	int temp, pivot;
	up=ub;
	dn=lb+1;
	pivot = a[lb];
	do
	{
		while(( a[dn] < pivot ) && ( dn <=ub))
			dn++;
		while( (a[up] > pivot) && ( up > lb))
			up--;
		if( dn < up)
		{
			temp = a[dn]; 	a[dn] = a[up];	a[up] = temp;
		}
	} while ( dn < up);
	/** Interchange pivot and a[up] **/
	a[lb] = a[up];
	a[up]= pivot;
	return up;
}
/********* Main Function ***********/
int main()
{
  	int a[20], i, n;
	printf("How many numbers :");
	scanf("%d",&n);
	printf("\nEnter the unsorted numbers :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		Quicksort(a,0,n-1);
	
	printf("\nThe sorted list is ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
/******************OUTPUT************************
[ctbora@localhost ~]$ vi  quictsort.c
[ctbora@localhost ~]$ gcc  quictsort.c
[ctbora@localhost ~]$ ./a.out
How many numbers :8

Enter the unsorted numbers :55
7 80 32 18 23 82 62

The sorted list is 7	18	23	32	55	62	80	82	
**************************************************/
