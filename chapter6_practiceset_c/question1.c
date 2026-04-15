/*
1. Write a program to print the address of a variable. Use this address to get the 
value of the variable.
*/
#include <stdio.h>

int main() {

    int a=10;

    int* b;
    b = &a;

    printf("address of a:%p\n",b);
    printf("value at memory address of a:%d\n",*b);
    return 0;
}