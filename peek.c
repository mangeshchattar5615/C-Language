#include <stdio.h>
# include <stdlib.h>
struct node 
{
int info;
struct node *next;
};
struct node *top= NULL;
void display();
void peek();
bool isempty():

int main()
{
int n, ch;
do
{
printf( :"\n\n stack menu \n1. peek\n2. isempty \3. display \n0. Exit");
printf ("\n enter choice 0-3?:");
scanf (
