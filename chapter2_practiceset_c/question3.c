//3. Write a program to check whether a number is divisible by 97 or not. 


#include<stdio.h>

int main(){



    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(n%97==0){

        printf("number is divisible by 97.");
    }
    else{
        printf("no.");
    }
    return 0;
}