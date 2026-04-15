/*3. Write a program to create an array of 10 integers and store multiplication table of 
5 in it. */


#include <stdio.h>

int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i<=9;i++){

        printf("%d X %d = %d\n",5,arr[i],5*arr[i]);
    }

    /* this is the program using pointer
    
    int* ptr = arr;
    for(int i = 0; i<=9;i++){

        printf("%d X %d = %d\n",5,*ptr,5* *ptr);
        ptr++;
    }
        
    */
    

    return 0;
}