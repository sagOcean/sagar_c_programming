/*
3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                         
Tax  
5% 
20% 
30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user. 

*/

#include<stdio.h>

int main(){

    float income;
    printf("enter your yearly income in lakhs:");
    scanf("%f",&income);

    if(income>=2.5 && income<=5){

        printf("you will pay %fL tax yearly according to your income of %fL.",((5.0/100)*income),income);

    }
    else if(income>5 && income<=10){

        printf("you will pay %fL tax yearly according to your income of %fL.",((20.0/100)*income),income);

    }
    else if(income>10){

        printf("you will pay %fL tax yearly according to your income of %fL.",((30.0/100)*income),income);

    }
    else{

        printf("you don't have to pay any income tax.");
    }


    return 0;
}