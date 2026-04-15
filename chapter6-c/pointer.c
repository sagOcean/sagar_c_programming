#include <stdio.h>

int main() {
    
    //pointer is a variable that stores the memory address of another variable

    int a; 
    int* b;  //syntax for declaring a pointer
    printf("enter a number:\n");
    scanf("%d",&a);

    b=&a; // b is a pointer that stores the memory address of a

    int c = *b;

    printf("address:%p\n",b);
    printf("number:%d\n",a);

    printf("value at address b:%d",c); //syntax for finding value at address:- *variable_name


    /*
    1.a has the number 3
    2.b stores the memory address of a
    3.c stores the value at b(memory address of a)

    
    
    */


    return 0;
}