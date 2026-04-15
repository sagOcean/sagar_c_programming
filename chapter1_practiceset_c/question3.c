/*

Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. 

*/


#include<stdio.h>

int main(){

    int p,t,r; float I;

    printf("enter the principal:");
    scanf("%d",&p);

    printf("enter the time:");
    scanf("%d",&t);

    printf("enter the rate:");
    scanf("%d",&r);

    I = (p*t*r)/100;

    printf("interest:%f",I);

    return 0;

}
