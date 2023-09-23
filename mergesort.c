/**********************************************
 *  Student name:  
 *  Roll_no:
 *  Class:S.Y.B.sc(Comp-Sci)                Batch:
 *  Program no:8
 *  Program name:write c program implementation of sorting
 *                  algorithm using merge sort.
 *  **********************************************/
//Program 3.5 : Merge Sort

#include<stdio.h>

void Merge (int a[], int low, int mid, int high)
{
/*	Merge a[low]..a[mid] and a[mid+1]..a[high] into a sorted	list
 *	 Store the sorted list in a[low]..a[high] 
 *	  b is a temporary array for merging  */
	
	int i,j,k, b[20];
	i = low; 	
	j = mid+1; 	
	k = 0;
	
	while 	((i <= mid) && (j <= high))
	{
		if( a[i] < a[j])
			b[k++] = a[i++];		
		else 
			b[k++]	=a[j++];	
	}
	while (i <= mid) 
		b[k++] = a[i++];	
	while (j <= high)			
		b[k++]	=a[j++];	

	/* Copy merged elements from b to a */
	for (i = low, k=0; i<=high ; i++, k++)	
		a[i] = b[k];
}
void MergeSort ( int a[], int low, int high )
{
	int mid;
	if (low < high) 	//more than one element
	{
		mid = (low + high) /2;	// Divide a into two sublists 
		MergeSort (a, low, mid);// Sort first sub list
		MergeSort (a, mid+1, high);// Sort second sub list
		Merge (a, low, mid, high);//Merge Sorted sub lists
	}
}
int main()
{
  	int a[20], i, n;
	printf("How many numbers :");
	scanf("%d",&n);
	printf("\nEnter the unsorted numbers :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	MergeSort(a,0,n-1);
	printf("\nThe sorted list is ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

/***************************************	
 [ctbora@localhost ~]$ vi mergesort.c 
[ctbora@localhost ~]$ gcc mergesort.c 
[ctbora@localhost ~]$ ./a.out
How many numbers :7

Enter the unsorted numbers :12 35 87 26 9 28 7

The sorted list is 7	9	12	26	28	35	87
****************************************/





