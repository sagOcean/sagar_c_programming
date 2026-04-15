// function with no arguments and no return value.

#include<stdio.h>

void avg();//function prototype



int main(){

   
    avg();//function call  //this doesnt have any argument to pass or accept return value
    // this function just performs the task without any arguments or return value/

   
    

    return 0;
}

void avg(){//function definition
    
    float x,y,z;
    printf("enter three numbers:\n");
    scanf("%f %f %f",&x,&y,&z);
    
    float average=(x+y+z)/3;
   
    printf("average of 3 numbers is:%f",average);
   //after printing average,it doesnt return anything
    
   
}