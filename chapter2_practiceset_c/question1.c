/*

1. Which of the following is invalid in C? 
a. int a=1; int b = a; 
b. int v = 3*3; 
c. char dt = ‘21 dec 2020’; 



*/

#include<stdio.h>

int main(){

    int a=1; int b = a; 
    int v = 3*3; 
    //char dt = ‘21 dec 2020’; //this is an error because there are more than 1 datatype in char
    char dt = '2'; //fix
    return 0;
}