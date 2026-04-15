//2. Write a function to convert Celsius temperature into Fahrenheit. 

void cel_2_far();
#include<stdio.h>

int main(){

    cel_2_far();

    return 0;
}

void cel_2_far(){

    float celsius,fahren;
    printf("enter the temperature in celsius:\n");
    scanf("%f",&celsius);

    fahren=((9*celsius)/5)+32;
    printf("celsius to fahrenheit:%f",fahren);
}