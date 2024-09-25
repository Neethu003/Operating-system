#include<stdio.h>
#include<sys/typ.h>
#include<unistd.h>
int main()
{
pid_t p=fork();
printf("my id is : %d\n",getpid());
printf("done\n");
retuen 0;
}
