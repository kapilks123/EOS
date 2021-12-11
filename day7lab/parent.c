#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
      pid_t id;
      int a,b,sum;
      id=fork();
      if(id==0)
{
      printf("CHILD PROCESS\n");
      printf("pid=%d\n",id);
      
}
else
{
      sleep(5);
      printf("parent process\n");
      printf("pid=%d\n",id);
      

}
}
