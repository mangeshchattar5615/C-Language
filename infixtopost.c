/**********************************************
 *  Student name:  
 *  Roll_no:
 *  Class:S.Y.B.sc(Comp-Sci)                Batch:
 *  Program no:17
 *  Program name:write program for infix to postfix conversion.
 ********************************************************/
#include <stdio.h>
#define MAX 20
typedef struct 
{ 
	int data[MAX];
	int  top;
}STACK;

void initstack(STACK *ps)
{ 	
	ps->top = -1;
}

void push(STACK *ps, int num)
{
  	ps->top++;
  	ps->data[ps->top] = num;
  	
}
int pop(STACK *ps)
{
	return(ps->data[ps->top--]);
}
int isempty(STACK *ps)
{
	return(ps->top == -1);
}
int isfull(STACK *ps)
{
	return(ps->top==MAX-1);
}

int main()
{
 	void postfix(char in[], char post[]);
 	char in[20], post[20];
 
 	printf("\n Enter the fully parenthesized infix expression  :");
 	scanf("%s",in);
	postfix(in,post);
 	printf("\n\nThe postfix string is   :");
	printf("%s",post);

}
void postfix(char in[], char post[])
{ 
	int i,j=0;
	char ch1;
  	STACK s1;
  	initstack(&s1);
  	for(i=0; in[i]!='\0';i++)
  	{
    		switch (in[i])
    		{
      			case '+':
      			case '-' :
      			case '*':
      			case '/' :
	    		case '%' :
  	    		case '(' : 
				push(&s1, in[i]); 
 			break;
      			case ')' :
		  		while((ch1 = pop(&s1))!='(')
				post[j++]=ch1; 
			break;
			default:  //operand
				post[j++]=in[i];
		}/* end switch */
 	}/* end of for */
  while(!isempty(&s1))
    	post[j++]=pop(&s1);
     
  	post[j]='\0';
}


/****************OUTPUT*******************************
 [ctbora@localhost ~]$ vi infixtopost.c
[ctbora@localhost ~]$ gcc infixtopost.c
[ctbora@localhost ~]$ ./a.out

 Enter the fully parenthesized infix expression  :a+(b-c*d)-e/f$g


The postfix string is   :abcd*-+efg$/-
********************************************************/


