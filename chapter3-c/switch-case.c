//similar to if-elseif statement but different syntax.

/*

switch (integer expression) 
{ 
case c1: 
// code; 
case c2:                     
                     // c1, c2 & c3 -> Constants 
// code;                
                     // code -> Any valid C code. 
case c3: 
// code: 
default: 
// code; 
} 



do this using switch-case statement:

Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50        
=> F


*/

#include<stdio.h>

int main(){

    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);

    switch(mark/10) //gives a particular expression to work on
    {

        case 10: //checks each and every value,if true then executes the below statement
        case 9:
        printf("grade:A");
        break; //breaks the statement after execution

        case 8:
        printf("grade:B");
        break;
        
        case 7:
        printf("grade:C");
        break;

        case 6:
        printf("grade:D");
        break;

        case 5:
        printf("grade:E");
        break;

        default:
        printf("you failed."); //if none of the above conditions worked,this will execute.

    }


    return 0;
}