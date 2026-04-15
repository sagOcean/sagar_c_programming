/*


2. Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. 

*/

#include<stdio.h>

int main(){

    float a,b,c; float percent;

    printf("enter your first subject mark:");
    scanf("%f",&a);

    printf("enter your second subject mark:");
    scanf("%f",&b);

    printf("enter your thirdnsubject mark:");
    scanf("%f",&c);

    percent=((a+b+c)/300)*100;
    

    if(percent>=40 &&( a>=33 && b>=33 && c>=33)){

        printf("your percentage:%f",percent);
        printf("\nyou are passed.");
    }
    else{
        
        printf("\nyou failed.");
    }



    return 0;
}