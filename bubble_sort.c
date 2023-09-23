// To sort an array using bubble sort.
#include<stdio.h>
#define MAX 20
void Bubble_sort(int A[MAX],int n);
void display (int A[MAX],int n);
void main()
{
	int A[MAX],n,i;
	printf("Enter the number of elements in the Array:");
	scanf("%d",&n);
	printf("\n Enter the elements:\n\n");
	for(i=0;i<n;i++)
{
	printf("Array[%d]= ",i);
	scanf("%d",&A[i]);
}
Bubble_sort(A,n);
display(A,n);
}
// Bubble sort function
void Bubble_sort(int A[MAX],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
	{
		if(A[j]>A[j+1])
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
	}
	}
	}
	//Display the sorted list
	int i;
	void display(int A[MAX],int n)
	{
		for(i=0;i<n;i++)
	printf("%d",A[i]);
	}

