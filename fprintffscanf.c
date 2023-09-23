#include<stdio.h>
#include<stdlib.h>
int main()
{
	char data1[10];
	char data2[10];
	char data3[10];
	FILE *fileName;
	fileName = fopen("Anything.txt","w+");
	fprintf(fileName,"%s %s %s","Welcome","To","LearnVern");
	rewind(fileName);
	fscanf(fileName,"%s %s %s",data1,data2,data3);
	fseek(fileName,0,SEEK_END);
	int ft = ftell(fileName);
	printf("%d\n",ft);
	printf("The data from file is : %s %s %s\n",data1,data2,data3);
	return(0);
}
