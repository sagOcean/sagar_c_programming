#include <stdio.h>

int main() {
    
    // code to reverse an array using pointer
    int vals[] = {10, 20, 30, 40};
    int len = 4;
    int *start = &vals[0];
    int *end = &vals[3]; // Pointing to the "hidden" spot just after the last element

    while (len>0) {
        printf("%d ", *end);
        // start++; 
        end--;// Move to next element
        len--;
    }


    return 0;
}