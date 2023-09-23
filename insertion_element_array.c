// Program for insertion of an element in array.
#include<stdio.h>
#include<process.h>
#define MAX 100 // Maximum number of elements that can be stored
int main()
{
	int size=0,a[MAX];
	setbuf(stdout,NULL);//turn off buffering of stdout
	int i,element,index;
	printf("Enter the value of n:\n");
	scanf("%d",&size);
	// code for displaying elements of Array
	printf("\n ****Elements in Array before Insertion****.\n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	// code for displaying elements of array
	printf("\n Enter the element to be inserted:\n");
	scanf("%d",&element);
	printf("Enter the index where element to be inserted:\n");
	scanf("%d",&index);
	if(index<0||index>size-1)
	{
		printf("Invalid index\n");
		return 0;
	}
	else
	{
		// Make space at the specified location
		for(i=size-1;i>=index;i--)
		{
			a[i+1]=a[i];
		}
		size++;//No of element increased by 1
		a[index]=element;
	}
	printf("**** Element in array after Insertion****.\n");
	for(i=0;i<size;i++)
	printf("%d\n",a[i]);
	return 0;
}
