#include<stdio.h>
int main(int argc, char const *argv[])
{
    int * ptr = 0x4000;
    ptr = (int*)malloc(sizeof(int)* 10);
    printf("Adder = %d \n", *ptr);
    
    return 0;
}

