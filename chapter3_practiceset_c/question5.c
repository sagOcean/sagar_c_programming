//5. Write a program to determine whether a character entered by the user is 
// lowercase or not.

#include<stdio.h>

int main(){

    char ch;
    printf("enter your character:");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122) //checks the ascii list of lowercase alphabets
    {

        printf("the character '%c' is lowercase and its number is %d.",ch,ch);
    }
    else{
        printf("the character '%c' is not lowercase.",ch);
    }
    return 0;
}