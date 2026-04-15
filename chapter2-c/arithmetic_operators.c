/*

there are the following arithmetic operators in c:

• + (Addition) 
• - (Subtraction) 
• * (Multiplication) 
• / (Division) 
• % (Modulus) 

but we need to take care of operator precedence(meaning when operations are conducted between 
two data types, which will take over.)




*/

#include<stdio.h>

int main(){

    int a=5,c=9;
    float b = 1.5;

    printf("%d\n",c/a);
    printf("%f",a/b); // in int divided by float,float wins over but %f must be specified.

}