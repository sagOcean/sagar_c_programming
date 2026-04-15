/*
 Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. 
*/

#include<stdio.h>
#include<math.h>

#define pi 3.14
int main(){


    int rad;float area;

    printf("enter the radius:");
    scanf("%d",&rad);

    area = pi * pow(rad,2);

    printf("area of a circle:%f",area);

    return 0;
}