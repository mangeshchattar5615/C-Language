#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void enqueue(int d)
{
 struct node * n;
 n= (struct node*) malloc (sizeof (struct node ));
r-> next =f;
}
else 
{
r->next =n ;
r= n;
n->next = f;
}
}
void dequeue()
 struct node* t;
t = f;
if ((f==NULL) &&(r==NULL))
printf("\n queue is empty");
else if (f==r ){
f= r  = NULL;
free(t);
}
else{
f= f-> next;
r->next = f;
free (t);
}


}
void printf(){
