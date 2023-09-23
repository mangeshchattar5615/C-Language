//Program 4.3 : Addition of Two Polynomials 

#include <stdio.h>
#include <malloc.h>

typedef struct node
{
 	int coef, exp;
 	struct node *next;
}POLY;

void create(POLY *p)
{
  		POLY * temp=p, *newnode;
  		int i,n;
		printf("\nHow many terms: ");
 		scanf("%d",&n);
  		printf("\nEnter the terms in descending order of power :\n");
  		for(i=0; i<n; i++)
  		{
    		newnode=(POLY *) malloc(sizeof(POLY));
    		newnode->next=NULL;
    		printf("\nCoeff and power of term %d :", i+1);
    		scanf("%d%d",&newnode->coef, &newnode->exp);
    		temp->next=newnode;
    		temp=newnode;
   	}
}

void display(POLY *p)
{
  	POLY *temp;
  	for(temp= p->next; temp!=NULL; temp= temp->next)
      	printf(" [%d x^%d ] + ",temp->coef, temp->exp);
	printf("\b\b  ");  //removes the last +
}


void add(POLY * p1, POLY * p2, POLY * p3)
{
 	POLY *t1=p1->next,*t2=p2->next, *t3=p3, *newnode;
  	int i;
  	while(t1 && t2)
  	{
    		newnode=(POLY *) malloc(sizeof(POLY));
    		newnode->next=NULL;
    		if(t1->exp > t2->exp)
    		{
     			newnode->exp=t1->exp;
     			newnode->coef=t1->coef;
     			t1=t1->next;
     		}
     		else
     			if(t1->exp < t2->exp)
     			{
     				newnode->exp=t2->exp;
     				newnode->coef=t2->coef;
     				t2=t2->next;
     			}
     			else
     			{
       				newnode->exp=t1->exp;
       				newnode->coef=t1->coef+ t2->coef;
       				t1=t1->next;
       				t2=t2->next;
     			}
     			// attach newnode
     	 		t3->next=newnode;
     			t3=newnode;
     	}
     	while(t1)
     	{
     		newnode=(POLY *) malloc(sizeof(POLY));
     		newnode->next=NULL;
     		newnode->exp=t1->exp;
     	 			    	  		    	    	    		     	newnode->coef=t1->coef;
     	 			    	  		    	    	    	    	     	t3->next=newnode;
     	 			    	  		    	    	    	    	     	t3=newnode;
     	 			    	  		    	    	    	    	     	t1=t1->next;
     	 			    	  		    	    	    	   	}
     	 			    	  		    	    	    	   	while(t2)
      	{
		newnode=(POLY *) malloc(sizeof(POLY));
    		newnode->next=NULL;
    		newnode->exp=t2->exp;
    		newnode->coef=t2->coef;
    		t3->next=newnode;
    		t3=newnode;
    		t2=t2->next;
   	}
}

int main()
{
 		POLY * p1, * p2, *p3;
		p1 = (POLY *)malloc(sizeof(POLY));
		p1->next=NULL;
		p2 = (POLY *)malloc(sizeof(POLY));
		p2->next=NULL;
		p3 = (POLY *)malloc(sizeof(POLY));
		p3->next=NULL;

 		create(p1);
		create(p2);
		add(p1,p2,p3);
 		printf("\nPolynomial 1 : ");
 		display(p1);
		printf("\nPolynomial 2 : ");
		display(p2);
		printf("\nThe addition is :");
 		display(p3);
 }
/*****************OUTPUT***********************************
 *[ctbora@localhost ~]$ vi addpoly.c
[ctbora@localhost ~]$ gcc addpoly.c
[ctbora@localhost ~]$ ./a.out

How many terms: 3

Enter the terms in descending order of power :

Coeff and power of term 1 :6 4

Coeff and power of term 2 :2 3

Coeff and power of term 3 :4 0

How many terms: 3

Enter the terms in descending order of power :

Coeff and power of term 1 :7 3

Coeff and power of term 2 :3 2

Coeff and power of term 3 :9 0

Polynomial 1 :  [6 x^4 ] +  [2 x^3 ] +  [4 x^0 ]
Polynomial 2 :  [7 x^3 ] +  [3 x^2 ] +  [9 x^0 ]
The addition is : [6 x^4 ] +  [9 x^3 ] +  [3 x^2 ] +  [13 x^0 ]   
**************************************************************/

