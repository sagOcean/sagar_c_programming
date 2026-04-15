
//this is an example of program having function with arguments but no return value.

//when we dont have anything to return,we declare function prototype and definition as void.

#include<stdio.h>

void avg(float,float,float);//function prototype



int main(){

    float x,y,z;
    printf("enter three numbers:\n");
    scanf("%f %f %f",&x,&y,&z);
    avg(x,y,z);//function call  //this have 3 arguments which it passes to avg() function

   
    

    return 0;
}

void avg(float a,float b,float c){//function definition

   float average=(a+b+c)/3;
   
   printf("average of 3 numbers is:%f",average);
   //after printing average,it doesnt return anything
    
   
}