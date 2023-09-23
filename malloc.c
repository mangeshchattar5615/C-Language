#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch[50];
	char *desc;
	strcpy(ch,"LearnVern");
	desc = malloc(200 *sizeof(char));
	if(desc==NULL)
	{
		fprintf(stderr,"Unable to allocate required memory");
	}
	else
	{
	strcpy(desc,"This is a C progromming course by Learnvern");
}
printf("Topic = %s\n",ch);
printf("Description = %s\n",desc);
return(0);
}
