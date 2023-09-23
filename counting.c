/**********************************************
 *  Student name:  
 *  Roll_no:
 *  Class:S.Y.B.sc(Comp-Sci)                Batch:
 *  Program no:6
 *  Program name:write  program for implementation of sorting algorithm using counting sort.
 *  **********************************************/
#include<stdio.h>
void countingSort(int a[],int k, int n)
{
int i ,c[20]={0},b[20];
/*  Count frequency of each element */
for(i=0;i<n;i++)
c[a[i]]+=1;
/* Calculate starting positions */
for(i=1;i<k;i++)
c[i]=c[i]+c[i-1];
/* Read elements and place in correct place */
for(i=n-1;i>=0;i--)
{
b[c[a[i]]-1]=a[i];
c[a[i]]-=1;
}
printf("The sorted output is : \n");
for(i=0;i<n;i++)
printf("%d\t",b[i]);
}
int main()
{int a[10],i,k,n;
printf("\nHow many elements :");
scanf("%d",&n);
printf("\nEnter the range :");
scanf("%d",&k);
printf("\nEnter the elements :");
for (i=0;i<n;i++)
 scanf("%d",&a [i]);
countingSort(a,k,n);
return 0;
}

/********************OUTPUT***************************
 *[ctbora@localhost ~]$ vi counting.c
[ctbora@localhost ~]$ gcc counting.c
[ctbora@localhost ~]$ ./a.out

How many elements :6

Enter the range :4 

Enter the elements :4 0 3 0 3 1
The sorted output is : 
0 	0	1	3	3	4 
**************************************************/


