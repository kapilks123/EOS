#include<stdio.h>

int result=0;
int temperature = 10;

int main (int argc ,char const * argv[])
{
    
    result= add (10,20,30);

    printf("addition : %d\n",result);

     result= sub (10,20);

    printf("subtraction : %d\n",result);
    return 0;
}
