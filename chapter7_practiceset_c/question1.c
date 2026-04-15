/*1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the 
array. */

    
    // int num[10] = {1,2,3,4,5,6,7,8,9,10};

    // int* ptr = num; // same as &num[0]/address of first element of the array

    // for(int i = 0;i<10;i++){

    //     printf(" element %d.\n",*ptr);
    //     ptr+=2;
        
    // }

    #include <stdio.h>

    int main() 
    {
        int num[10] = {1,2,3,4,5,6,7,8,9,10};
        int* ptr = num; 

        // Print the first element
        printf("First element (ptr): %d\n", *ptr);

        // Verify that ptr + 2 is the 3rd element (which is value 3)
        // Note: We use *(ptr + 2) to get the value. We do NOT change ptr itself.
        printf("Third element using (ptr+2): %d\n", *(ptr + 2));
        
        // Verify against actual array index
        printf("Third element using num[2]:  %d\n", num[2]);

    return 0;

}