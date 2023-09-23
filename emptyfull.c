//implementing static stack an array in c

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 1000

int top = -1;
int stack[N];
bool isEmpty();
bool isFull();
int main()
{
printf("STATIC ARRAY(total capacity:%d)\n",N);
int choice;
while(1)
{
printf("\nchoose any of the following options:\n");

printf("1:check if the stack is empty");
printf("2:check if the stack is full\n");
scanf("%d",&choice);
}
switch(choice)
{
case 0: exit(0);
case 4:isEmpty();break;
case 5:isFull();break;
defult: printf("please choose a correct option!");
}
return 0;
} 
bool isEmpty()
{
if (top == -1)
{
printf("stack is empty:underflow state\n");
return true;
} 
  printf("stack is not empty\n");
  return false;
}
 bool isFull()
{
if(top== N-1)
{
printf("stack is full:overflow state\n");
return true;
}
printf("stack is not full\n");
return false;
}
