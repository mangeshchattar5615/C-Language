#include<stdio.h>
void display(void(*p)())
{
	
for(int i=1;i<=5;i++)
	{
		p(i);
		
	}
}
void print_number(int num)
{
	printf("%d",num);
}
int main()
{
	void (*p)(int);
	printf("The value are : ");
	display(print_number);
	return(0);
}

