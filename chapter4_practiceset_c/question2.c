//2. Write a program to print multiplication table of 10 in reversed order. 

#include<stdio.h>

int main(){

    int i;

    for(i=10;i>=1;i--){

        printf("10 X %d = %d\n",i,10*i);
    }
    



    return 0;
}