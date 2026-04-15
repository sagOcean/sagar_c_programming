/*4. Repeat problem 3 for a general input provided by the user using scanf. */

#include <stdio.h>

int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int n;

    printf("enter a number for multiplication table:\n");
    scanf("%d",&n);

    for(int i = 0; i<=9;i++){

        printf("%d X %d = %d\n",n,arr[i],n*arr[i]);
    }
    /*
    same thing using pointer arithmetic
    int* ptr = arr;
    for(int i = 0;i<=9;i++){

        printf("%d X %d = %d\n",n,*ptr,n* *ptr); 
        ptr++;
    
    
    }
    */
    
    
    
    
    
    //
    return 0;
}