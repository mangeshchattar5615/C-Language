//Q.5 write a C progranm dynamic implimentation of stack to perform peek and isEmpty opretation 

#include <stdio.h>
# include <stdlib.h>

struct node 
{
int data;
struct node *next;
};

struct node *top= NULL;
void display();
void peek();
void isEmpty():

int main()
{
int n, ch;
do
{
printf( :"\n\n stack menu \n1. peek\n2. isempty \3. display \n0. Exit");
printf ("\n enter choice 0-3?:");
scanf ("%d ", &ch);
switchi  
