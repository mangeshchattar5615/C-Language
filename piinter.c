#include<stdio.h>
int main()
{
int var = 20;
int *ptr = &var;
printf("\n The Address of var is : %x \n",&var);
printf("\n The address stored in ptr is : %x \n",ptr);
printf("\n Value of var stored in ptr : %d \n",*ptr);
return(0);
}
