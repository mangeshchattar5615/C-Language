#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
void main()
{
	int num;
	int facto;
	printf("Enter a number:");
	scanf("%d",&num);
	facto = factorial(num);
	printf("Factorial of %d is %d\n",num,facto);
}
