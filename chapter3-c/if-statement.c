// in c language certain statements are executed only if certain conditions are met 
// and there are many ways to provide a condition and execute them
// one way is the if-else statement


/*

if (condition_to_be_checked) 
{ 
// Statements if condition is true 
} 
else
{ 
// Statements if condition is false 
} 

else block is optional
*/

#include<stdio.h>


int main(){

    int yourAge;
    printf("enter your age:");
    scanf("%d",&yourAge);

    if(yourAge>=18){

        printf("you are officially an adult.");
    }
    else{

        printf("you are still below the age of 18.");
    }


    return 0;
}

