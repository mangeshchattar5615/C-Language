#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *left,*right;
};
struct node *createnode(int key)
{
struct node *newnode=(struct node *)malloc(sizeof(struct node));
newnode->info=key;
newnode->left=NULL;
newnode->right=NULL;
return(newnode);
}
int count=0;
int nonleafnodes(struct node* newnode)
{
if(newnode!=NULL)
{
nonleafnodes(newnode->left);
if((newnode->left!=NULL)|| (newnode->right!=NULL))
{
count++;
}
nonleafnodes(newnode->right);
}
return count;
}
int main()
{
struct node *newnode=createnode(25);
newnode->left=createnode(27);
newnode->right=createnode(19);
newnode->left=createnode(17);
newnode->right=createnode(91);
newnode->left=createnode(13);
newnode->right=createnode(25);
newnode->left=createnode(77);
printf("Number of non lear nodes in the tree are: %d", nonleafnodes(newnode));
printf("\n");
count=0;
}

