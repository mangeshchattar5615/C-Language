//implementing static stack an array in c

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 1000

int top = -1;
int stack[N];

void push();
int pop();
int main()
{
printf("STSTIC ARRAY(total capacity:%d)\n",N);
int choice;
while(1)
{
printf("\nchoose any of the following options:\n");
printf("0:exit 1:push 2:pop\n");
scanf("%d",&choice);

switch(choice)
{
case 0: exit(0);
case 1:push();break;
case 2:pop();break;
defult: printf("please choose a correct option!");
}
}
return 0;
}
void push()
{
//cheaking overflow state
if(top ==N-1)
printf("overflow state:can't add more element into the stack \n");
else
{
int x;
printf("enter element to be pushed into the stack:");
scanf("%d",&x);
top+=1;
stack[top] = x;
}
}
int pop()
{
//checking underflow state 
if (top == -1)
printf("underflow state already empty,can't remove any element\n");
else
{
int x =stack[top];
printf("popping %d out of the stack \n", x);
top-=1;
return x;
} 
return -1;
}
