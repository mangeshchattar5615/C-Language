#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
FILE *fptr;
fptr = fopen("Nofile.txt","r");
printf("Value returned from errno: %d\n",errno);
printf("The error message is given as : %s\n",strerror(errno));
perror("Message from perror");
return(0);
}
