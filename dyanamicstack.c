//Q.4) dynamic implimentation of stack to perform push and pop operation
#include <stdio.h>
#include <stdlib.h>


struct node
{
 int data;
struct node  *next;
};

struct node *top = NULL;

void display();
void push(int);
void pop();
 
int main ()
{
  int n, ch;
do
{
printf("\n \n Stack menu \n1. Push \n2. Pop\n3. Display\n0. Exit");
 printf ("\n Enter choice 0-3? :");
scanf ("%d ",&ch);
switch (ch)
{
case 1:
    printf("\n enter number: ");
scanf("%d ",&n);
push(n);
break;
case 2:
pop();
break;
case 3:
display();
break;
}
} while (ch != 0);
}

void push (int item)
{
struct node *nptr =malloc(sizeof (struct node ));
nptr->data = item;
nptr ->next =top;
 top = nptr;
}

void display()
{
 struct node *temp;
temp =top;
while (temp !=NULL)
{
printf ("\n %d push", temp->data);
temp = temp ->next;
}
}

void pop()
{
if (top == NULL)
{
printf ("\n\n Stack is empty");
}
else
{
struct node *temp ;
temp = top;
top= top->next;
printf ("\n \n %d deleted ", temp -> data );
free (temp);
}
}

