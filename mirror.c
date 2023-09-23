#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *newnode(int data)
{
struct node *node=(struct node*)malloc(sizeof(struct node));
node->data=data;
// node->left=data;
node->right=NULL;
node->left=NULL;
return (node);
}
void mirror(struct node *node)
{
if(node==NULL)
return ;
else
{
struct node *temp;
mirror(node->left);
mirror(node->right);
temp=node->left;
node->left=node->right;
node->right=temp;
}
}
void inorder(struct node *node)
{
if(node==NULL)
return;
inorder(node->left);
printf("%d",node->data);
inorder(node->right);
}
int main()
{
struct node *root=newnode(1);
root->left=newnode(2);
root->left=newnode(3);
root->left->left=newnode(4);
root->left->right=newnode(5);
printf("\n inorder traversal of constructed tree is: \n");
inorder(root);
mirror(root);

printf("\n inorder traversal of constructde tree is: \n");
inorder(root);
return 0;
}
