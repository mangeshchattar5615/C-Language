#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,n,i;
printf("Enter n value:");
scanf("%d",&n);
p=(int*) calloc(n,2);
p=(int*) realloc(p,n);
for(int i=0;i<n;i++)
{
	scanf("%d",p+i);
}
free(p);
}
