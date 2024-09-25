#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
char* cmd="ls";
char* arguement[]={"ls","-l",NULL};
pid_t p=fork();
if(p<0)
{
printf("failed fork \n");
}
else if(p==0)
{
printf("Child process \n");
int status=execvp(cmd,arguement);
if(status==-1)
{
printf("terminated \n");
exit(1);
}
}
else
{
printf("Parent process \n");
printf("Done \n");
}


