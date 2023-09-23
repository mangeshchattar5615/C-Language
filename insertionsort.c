//Q2.write a c program for insertion sort.

#include<stdio.h>
int main()
{
int i, j,n, number[25],temp;
printf("How many numbers u are going to enter?:");
scanf("%d",&n);
printf("enter %d element: ",n);
for(i=0;i<n;i++)
scanf("%d",&number[i]);
for(i=1;i<n;i++)
{
temp=number[i];
j=i-1;
while((temp<number[j])&&(j>=0))
{
number[j+1]=number[j];
j=j-1;
}
number[j+1]=temp;
}
printf("order of sorted elements: ");
for(i=0;i<n; i++)
printf("%d\n",number[i]);

return 0;
}
