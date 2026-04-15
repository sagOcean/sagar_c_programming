// Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10). 

#include<stdio.h>

int main(){


    int i,sum=0;
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){

        sum=sum+(n*i);
        

    }
    printf("sum of multiplication of number %d:%d",n,sum);
    
    return 0;
}