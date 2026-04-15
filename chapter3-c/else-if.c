//if there are multiple conditions then if-else if statement is used

#include<stdio.h>

int main(){


    float n;
    printf("enter a number:");
    scanf("%f",&n);

    if(n>0){

        printf("number is positive.");
    }
    else if(n<0){

        printf("number is negative.");
    }
    else{

        printf("number is zero");
    }

    return 0;
}