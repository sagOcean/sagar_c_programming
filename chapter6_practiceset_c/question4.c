/*4. Write a function and pass the value by reference. */

#include <stdio.h>

/*
in call by reference, instead of passing the values, the main function passes the memory address of that value.
when the value is changed on the exact memory address, it is changed permanently everywhere(unless someone makes
some changes on it as well).


*/

void reallyChange(int *pointerToNum) // 3. *pointerToNum = value at(memory address of originalNum) where 10 resides
{
    *pointerToNum = 999; // 4. change/overwrite the value at(memory address of originalNum) to 999
    printf("Inside function: %d\n", *pointerToNum); //prints 999
}

int main() 
{
    int originalNum = 10; //1. originalNum is declared and has its own memory address where the value 10 resides

    reallyChange(&originalNum); //2. reallyChange() is carrying the "memory address" of originalNum to pointerToNum
    
    printf("Inside main: %d\n", originalNum); // 5. prints 999(since the value has changed at the exact memory address)
    return 0;
}