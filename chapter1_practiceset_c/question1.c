// Write a C program to calculate area of a rectangle: 


#include<stdio.h>

int main(){

    int a,b,area;

    printf("enter length of rectangle:");
    scanf("%d",&a);

    printf("enter breadth of rectangle:");
    scanf("%d",&b);

    area = a*b;

    printf("area of rectangle: %d",area);


    return 0;
}