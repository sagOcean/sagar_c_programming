/*
Following operations can be performed on a pointer: 
1. Addition of a number to a pointer. 
2. Subtraction of a number from a pointer. 
3. Subtraction of one pointer from another. 
4. Comparison of two pointer variables. 
Quick Quiz: Try these operations on another variable by creating pointers in a separate 
program. Demonstrate all the four operations.
 */

#include <stdio.h>

int main() {
    // your code here
    // int a=5;

    int a=3;
    int* p = &a;
    printf("memory address of a:%u\n",&a);
    printf("memory address of a using pointer p:%u\n",p);
    p+=4; // increment by 16 bytes
    printf("memory address after pointer increment:%u\n",p);

    for(int i=1;i<=3;i++){
        printf("\n");
    }

    int b=3;
    int* q = &b;
    printf("memory address of b:%u\n",&b);
    printf("memory address of b using pointer q:%u\n",q);
    q-=3; // decrement 12 bytes
    printf("memory address after pointer increment:%u\n",q);

    for(int i=1;i<=3;i++){
        printf("\n");
    }

    int c=7;
    int* r = &c;
    printf("memory address of c:%u\n",&c);
    printf("memory address of c using pointer r:%u\n",r);
    r-=3; // decrement 12 bytes
    printf("memory address after pointer increment:%u\n",r);





    return 0;
}