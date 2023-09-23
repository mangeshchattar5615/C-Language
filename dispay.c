#include<stdio.h>
void main()
{
	int i,n,a[20];
	printf("How many numbers?");
	scanf("%d",&n);
	printf("Enter the number \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n The even number are:\n");
	for(i=0;i<n;i++)
	if(a[i]%2==0)
	printf("%d\t",a[i]);
}
