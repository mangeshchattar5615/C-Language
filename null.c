#include<stdio.h>
int main()
{
	int *ptr = NULL;
	printf("The value inside variable ptr is %d \n",ptr);
	void *p = NULL;
	printf("The size of pointer is : %d \n",sizeof(p)); 
	return(0);
}
