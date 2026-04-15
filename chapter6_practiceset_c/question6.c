/*6. Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable. */

#include <stdio.h>

int main() {
    
    int i = 5;          // Create an integer variable i and store the value 5 in it

    int* a = &i;        // Create a pointer a that stores the address of i

    int** b = &a;       // Create a pointer b that stores the address of pointer a

    printf("value of i using *a is:%d\n", *a);
    // *a means: go to the memory location that a is pointing to (i) and read its value

    printf("value of i using **b is:%d\n", **b);
    // **b means: first go to the memory location that b points to (a),
    // then go to the memory location that a points to (i),
    // and finally read the value stored there

    return 0;
}
