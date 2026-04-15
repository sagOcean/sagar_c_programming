/*2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why? */


/*
the addresses are different because no changes are made on the actual address of i,
the main() function just created a copy of the value stored at i and passed to the 
function address() where x took that value(now it has a different memory address).
*/

#include <stdio.h>

int address(int x){

    printf("memory address of x:%p",&x);


}

int main() {

    int i=9;
    printf("memory address of i:%p\n",&i);

    // int j;
    // int* k = &j;
    // printf("%p\n",*k);
    address(i);
    return 0;
}

