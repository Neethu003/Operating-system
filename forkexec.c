#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
char* cmd="ls";
char* arg[]={"ls","-l",NULL};
pid_t p=fork();
if(p<0)
{
printf("Child process \n");
int status=execvp(cmd,arg);
if(status==-1)
{
printf("terminated\n");
exit(1);
}
}
else
{
printf("Parent process\n");
wait(NULL);
printf("Done \n");
}
}
