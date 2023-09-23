#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	FILE *fptr;
	char st[100];
	fptr=fopen("program.txt","w");
	printf("Enter a string:");
	gets(st);
	 fputs(st,fptr);
	 fclose(fptr);
	 return(0);
	 
}
