/*

 Write a program with three functions 
1. Good morning function which prints “good morning”. 
2. Good afternoon function which prints “good afternoon”. 
3. Good night function which prints “good night”. 


*/
#include<stdio.h>

char good_morning(char[]);//function prototype for good morning

char good_morning(char a[])//function definition for good morning
{
    
    printf("good morning %s!",a);
}
char good_afternoon(char[]);// function prototype for good afternoon

char good_afternoon(char x[])//function definition for good afternoon
{

    printf("\ngood afternoon %s!",x);
}

char good_night(char[]);// function prototype for good afternoon

char good_night(char y[])//function definition for good afternoon
{

    printf("\ngood night %s!",y);
}



int main(){

    good_morning("sagar");//function call for good morning
    good_afternoon("sagar");//function call for good afternoon
    good_night("sagar");//function call for good night

    return 0;
}