#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int val)
{
struct node *newNode = malloc (sizeof(struct node));
newNode->data = val;
newNode->next = NULL;

if(front == NULL && rear == NULL)
front = rear = newNode ;
else
{
rear->next = newNode;
rear = newNode;
}
}

void dequeue()
{
struct node *temp;

if (front == NULL)
printf ("queue is empty. unable to perform dequeue\n");
else
{

temp = front;
front = front-> next;

if (front == NULL)
rear = NULL;

free (temp);
}

}

void printList()
{
struct node *temp = front;

while(temp)
{
printf("%d->",temp->data);
temp = temp->next;
}
printf("NULL\n");
}

int main()
{
enqueue(10);front;
enqueue(20);
enqueue(30);
printf ("Queue :");
printList();
dequeue();
printf("after dequeue the new queue:");
printList();
dequeue();
printf("after dequeue the new queue:");
printList();

return 0;
}
