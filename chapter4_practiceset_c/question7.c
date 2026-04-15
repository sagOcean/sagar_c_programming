//Write a program to calculate the factorial of a given number using a for loop. 

#include<stdio.h>

int main(){

    int n,i,fact=1;
    printf("enter a number you want factorial of:\n");
    scanf("%d",&n);
    

    for(i=1;i<=n;i++){

        fact=fact*i;
        
    }
    printf("factorial of the given number is:%d",fact);

}