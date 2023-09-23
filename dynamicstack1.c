//Q5.write a C program for Dynamic implementation of stack to perform peek and isEmpty operations.

#include<stdio.h>
#include<stdlib.h>

struct node
{ 
  int data;
 struct node *next;
};

struct node *top=NULL;

void display();
void peek(int);
void isEmpty();

int main()
{ 
  int n,ch;
  do
  { 
  printf("\n\nStack Menu\n1.Peek\n2.isEmpty\n3.Display\n0.Exit");
  printf("\nEnter Choice 0-3?:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
       printf("\nEnter number:");
       scanf("%d",&n);
       peek(n);
       break;
    case 2:
       printf("\nEnter number");
       scanf("%d",&n);
       isEmpty();	
    case 3:
	display();
 	break;
   }
 }while(ch !=0);
}

 void peek(int item)
{ 
  struct node *nptr = malloc(sizeof(struct node));
  nptr->data = item;
  nptr->next = top;
  top = nptr;
}

void display()
{
   struct node *temp;
   temp=top;
   while(temp !=NULL)
   {
    printf("\n%d",temp->data);
   temp = temp->next;
   }
}

void isEmpty()
{ 
   if(top == NULL)
   {
      printf("\n\nStack is Empty");
   }
   else
   {
        struct node *temp;
	temp = top;
	top = top->next;
	printf("\n\n%d deleted",temp->data);
	free(temp);
   }
}
