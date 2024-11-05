#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    int pid,childid;
    pid=getpid();
    //fflush(stdout);
    if((childid=fork())>0)
    {
        printf("\nI am in the parent process : %d",pid);
        printf("\nI am in the parent process : %d",getpid());
        printf("\nI am in the parent process : %d\n",getppid());
    }
    else
    {
        printf("\nI am in the child process : %d",pid);
        printf("\nI am in the child process : %d",getpid());
        printf("\nI am in the child process : %d",getppid());
    }
    return 0;
}