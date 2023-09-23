#include<stdio.h>
int main()
{
	int arr[5]= { 12,45,23,67,44};
	int *p,*q;
	p= &arr[0];
	q = arr[3];
printf("The Address of p is %d\n",p);
printf("The value of q is %d\n ",q);
return(0);
}
