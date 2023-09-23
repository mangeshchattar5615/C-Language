#include<stdio.h>
#include<stdlib.h>
int linearsearch(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		 return i;        
	} 
	 return -1;
}
int main()
{
	int i,n,a[20],key,pos;
	printf("how many number");
	scanf("%d",&n);
	printf("enter element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the key to be searched");
	scanf("%d",&key);
	pos=linearsearch(a,n,key);
	if(pos==-1)
	printf("%d elemet not fount",key);
	else
	printf("%d found at position %d",key,pos);
	return 0;
	
}
