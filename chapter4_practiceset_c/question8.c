//Repeat 7 using while loop. 

#include<stdio.h>

int main(){

    int n,i=1,fact=1;

    printf("enter a number:\n");
    scanf("%d",&n);

    while(i<=n){
        fact=fact*i;
    }
    printf("factorial:%d",fact);
    return 0;
}