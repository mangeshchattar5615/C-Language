#include<stdio.h>
//#include<conio.h>
int main()
{
	int i,array[10],  search,  first,  last,  middle;
	printf("Enter 10 elements (in ascending order): ");
	for(i=0; i<10; i++)
	scanf("%d", &search);
	printf("\nEnter element to be search: ");
	scanf("%d",&search);
	first = 0;
	last = 9;
	middle = (first+last)/2;
	while(first <= last)
	{
		if(arr[middle]<search)
		first = middle+1;
		else if(arr[middle]==search)
		{
			printf("\nThe number, %d found at Position %d",search, middle+1);
			break;
		}
		else
		last = middle-1;
		middle = (first+last)/2;
    }
	if(first>last)
	printf("\nThe number, %d is not found is given Array",search);
	//getch();
	return 0;
}
