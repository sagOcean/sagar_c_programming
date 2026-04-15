#include <stdio.h>

void swapByReference(int *x, int *y)  //(value at(&a),value at(&b))
{
    int temp = *x; // Go to address x and take the value and put it in temp
    *x = *y;       // Go to address x and put the value found at address y||put value at(memory address of a) = value at(memory address of b)
    *y = temp;     // Go to address y and put the temp value || put temp at *y(value at(memory address of b))
    printf("Inside Function: *x = %d, *y = %d\n", *x, *y);
}

int main() 
{
    int a = 5, b = 10;
    swapByReference(&a, &b); // Send the addresses of a and b
    printf("After Function: a = %d, b = %d\n", a, b);
    return 0;
}