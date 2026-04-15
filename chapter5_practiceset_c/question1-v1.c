/*1. Write a program using function to find average of three numbers. */

// the below program is an example of program with both arguments and return value.

#include<stdio.h>

float avg(float,float,float);//function prototype



int main(){

    float x,y,z,av;
    printf("enter three numbers:\n");
    scanf("%f %f %f",&x,&y,&z);
    av=avg(x,y,z);//function call

    printf("average:%f",av);
    

    return 0;
}

float avg(float x,float y,float z){//function definition

   float average=(x+y+z)/3;
   
//    printf("average of 3 numbers is:%f",average);
    return average;
   
}