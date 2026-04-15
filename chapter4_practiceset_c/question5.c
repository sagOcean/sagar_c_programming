// Write a program to sum first ten natural numbers using for and do while loop. 

#include<stdio.h>

int main(){

    int i=1,n=0;
    for(i=1;i<=10;i++){

        n=n+i;
       
    }
    printf("sum of first 10 natural numbers:%d\n",n);


    i=1;
    n=0;
    do{
        n=n+i;
        i++;
    }
    while(i<=10);
    printf("sum:%d\n",n);
    return 0;
}