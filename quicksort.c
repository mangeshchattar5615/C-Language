//_____________practical 2_______________
//Q1.write a c program for quick sort.

#include<stdio.h>
void Quicksort(int number[25],int first,int last)
{
int i,j,pivot,temp;
if(first<last)
 {
  pivot=first;
  i=first;
  j=last;
 while(i<j)
 {
 while(number[i]<=number[pivot]&&i<last)
 i++;
 while(number[j]>number[pivot])
 j--;
 if(i<j)
  {
  temp=number[i];
  number[i]=number[j];
  number[j]=temp;
  }
 } 
 temp=number[pivot];
 number[pivot]=number[j];
 number[j]=temp;
 Quicksort(number,first,j-1);
 Quicksort(number,j+1,last);
 }
 }
 int main()
 {
  int i,count,number[25];
  printf("How many elements are u going to enter?:");
  scanf("%d",&count);
  printf("Enter %d elements:",count);
  for(i=0;i<count;i++) 
    scanf("%d",&number[i]);
  Quicksort(number,0,count-1);
  printf("Order of sorted elements:");
  for(i=0;i<count;i++)
    printf("%d\t",number[i]);
    
   return(0);
}
