#include<stdio.h> 
int main (){ 
    int i = 8; 
    int *j; 
    j = &i; 
    printf("add i= %u\n",&i); // %u gives memory address in decimal digits

    printf("add i= %u\n",j); //prints the memory address of i

    printf("add j= %u\n",&j); // &j = &(&i) ex: if memory address of i is 1223, &j= memory address of 1223

    printf("value i= %d\n",i);  

    printf("value i= %d\n",*(&i)); 

    printf("value i= %d\n",*j); // j has address of i and *j has value of address i 

    return 0;          
} 