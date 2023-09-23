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
	void (*p)(int) = &print_number;
	printf("The value are : ");
	display(p);
	return(0);
}

