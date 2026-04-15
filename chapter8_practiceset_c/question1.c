/*1. Which of the following is used to appropriately read a multi-word string. 
1. gets() 
2. puts() 
3. printf() 
4. scanf() */

#include <stdio.h>

int main() {
    char name[30];
    printf("enter your name: ");
    
    
    gets(name);   //gets() is used to appropriately read a multi-word string
    /*s
    canf("%s",name);
    printf("%s",name);
    */

    // puts(name);
    printf("%s",name);
    
    return 0;
}