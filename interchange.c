// Write a C program to accept to two integers from the user and  interchange them. Display the interchangen number.
#include<stdio.h>
int main()
{
	int number1,number2,temp;
	printf("Enter number1 and number2 :");
	scanf("%d%d",&number1 ,&number2);
	printf("Befour interchange : number1=%d and number2=%d\n",number1,number2);
temp=number1;
number1=number2;
number2=temp;
printf("After interchange : number1=%d and number2=%d\n",number1,number2);
}
