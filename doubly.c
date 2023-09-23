#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int info;
	struct node *prev,*next;
}NODE;
void createlist (NODE *head)
{  
	int n,count;
	NODE *last,*newnode;
	printf("how many nodes");
	scanf("%d",&n);
	last=head;
	for(count=1;count<=n;count++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->next=newnode->prev=NULL;
		printf("\nenter the node data");
		scanf("%d",&newnode->info);
		last->next=newnode;
		newnode->prev=last;
		last=newnode;
	}
}
void display (NODE *head)
{
	NODE *temp;
	for(temp=head->next;temp!=NULL;temp=temp->next)
		printf("\t%d",temp->info);
}
int search (NODE *head,int num)
{ 
	NODE * temp;int pos;
	for(temp=head->next,pos=1;temp!=NULL;temp=temp->next,pos++)
		if(temp->info==num)
			return pos;
	return -1;
}
void insert (NODE *head,int num,int pos)
{
	NODE *newnode,*temp,*temp1;
	int i;
	for(temp=head,i=1;(temp!=NULL)&&(i<=pos-1);i++)
		temp=temp->next;
	if(temp==NULL)
	{
		printf("position is out of range");
		return;
	}
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->info=num;
	newnode->next=newnode->prev=NULL;
	temp1=temp->next;
	newnode->next=temp1;
	temp->prev=newnode;
	temp->prev=temp;
}
		void deletepos (NODE *head,int pos)
{
	NODE *temp,*temp1;
	int i;
	for(temp=head,i=1;(temp->next!=NULL)&&(i<=pos-1);i++)
		temp=temp->next;
	if(temp->next==NULL)
	{
		printf("position is out of range");
		return;
	}
	temp1=temp->next;
	temp->next=temp1->next;
	if(temp1->next!=NULL)
		temp1->next->prev=temp;
	free(temp1);
}
 void deletevalue (NODE *head,int num)
{
        NODE *temp,*temp1;
        
        for(temp=head;temp->next!=NULL;
                temp=temp->next)
	   
        if(temp->next->info==num)
        {
               
        temp1=temp->next;
        temp->next=temp1->next;
        if(temp1->next!=NULL)
                temp1->next->prev=temp;
        free(temp1);
	return;
	}
	printf("element not found");
	}
	void main()
	{
	NODE* head;
	int choice,n,pos;
	head=(NODE *)malloc(sizeof(NODE));
	head->prev=head->next=NULL;
	do
	{
		printf("\n1:CREATE");
		printf("\n2:INSERT");
		printf("\n3:DELETE BY NUMBER");
		printf("\n4:DELETE BY POSITION");
		printf("\n5:SERACH");
		printf("\n6:DISPLAY");
		printf("\n7:EXIT");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				createlist(head);
				break;
			case 2:
			       printf("\nenter the element and position");	
			       scanf("%d%d",&n,&pos);
			       insert(head,n,pos);
			       display(head);
			       break;
		        case 3:
                               printf("\nenter the element");
                               scanf("%d",&n);
                               deletevalue(head,n);
                               display(head);
                               break;
		        case 4:
                               printf("\nenter the position");
                               scanf("%d",&pos);
                               deletepos(head,pos);
                               display(head);
                               break;
                             case 5:
                               printf("\nenter the element to br search");
                               scanf("%d",&n);
                               pos=search(head,n);
			       if(pos==-1)
				   printf("\nelement not found");
			       else 
				   printf("\nelement found at position %d",pos);
			       break;
			     case 6:
			       display(head);
			       break;
		}
	}while(choice !=7);
	}

/*************************************OUTPUT****************************************
 [ctbora@localhost ~]$ vi doubly.c
[ctbora@localhost ~]$ gcc doubly.c
[ctbora@localhost ~]$ ./a.out

1:CREATE
2:INSERT
3:DELETE BY NUMBER
4:DELETE BY POSITION
5:SERACH
6:DISPLAY
7:EXITenter your choice1
how many nodes5

enter the node data10

enter the node data20

enter the node data30

enter the node data40

enter the node data50

1:CREATE
2:INSERT
3:DELETE BY NUMBER
4:DELETE BY POSITION
5:SERACH
6:DISPLAY
7:EXITenter your choice6
	10	20	30	40	50
1:CREATE
2:INSERT
3:DELETE BY NUMBER
4:DELETE BY POSITION
5:SERACH
6:DISPLAY
7:EXITenter your choice3

enter the element10
	20	30	40	50
1:CREATE
2:INSERT
3:DELETE BY NUMBER
4:DELETE BY POSITION
5:SERACH
6:DISPLAY
7:EXITenter your choice4

enter the position
1
	30	40	50
1:CREATE
2:INSERT
3:DELETE BY NUMBER
4:DELETE BY POSITION
5:SERACH
6:DISPLAY
7:EXITenter your choice5

enter the element to br search20

element not found
1:CREATE
2:INSERT
3:DELETE BY NUMBER
4:DELETE BY POSITION
5:SERACH
6:DISPLAY
7:EXITenter your choice


************************************************************************/





