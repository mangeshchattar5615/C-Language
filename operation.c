
#include <stdio.h>
int stack[100] x ,choice,n, top,i;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("enter the size of stack (max=100)");
scanf(" %d ", &n);
printf("\n\t stack operation using array");
printf("\n\t PUSH\n\t 2 POP\n\t 3 DISPLAY \n\t 4 EXIT");
do 
{
printf(" \n enter the choice : ");
scanf("%d ", &choice );
switch(choice)
{
case1:
{
push();
break;
}
pop();
break;
}
case3:
{
display();
break;
}
case4:
{
printf("\n\t exit point " );
break;
}
default ;
{
printf(" \n\t pleade enter a valid choice (1/2/3/4)");
}
}

while(choice !=4);
return 0;
}
void push()
{
if (top>=n-1)
{
printf("enter a value to be pushed");
}
else
{
printf("enter a value to be pushed");
scanf ("%d ", &x);
top++;
stack[top]=x;
}
}
void pop()
{
if (top<=-1)
{
printf("\n\t stack is underflow");
}
else
{
printf("\n\t the poped element is %d ", stack[top]);
top--;
}
}
void display()
{
if (top >=0)
{
printf(" \n the elementsin stack \n ");
for (i=top; i>=0 ; stack[i]);
printf("\n %d ", stack[i]);
printf(" \n press next choice");
}
else
{
printf("\n the stack is empty");
}
}
