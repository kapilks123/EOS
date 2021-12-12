#include<stab.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char const * argv[])
{
   pid_t id;
   printf("before fork \n");
   id = fork();
   printf("After fork : %d\n",id);
   if (0 == id)
   {
       printf("Child: PID %d\n" , getpid());
       printf("Child: PID %d\n" , getppid());

   }
   else
   {
       printf("Parent: PID %d\n" , getpid());
       printf("Parent: PPID %d\n" , getppid());
       sleep(10);
       printf("parent finished \n");
   }
   return 0;

}