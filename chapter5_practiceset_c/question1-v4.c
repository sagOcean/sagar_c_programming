
//function with return value but no arguments 

#include<stdio.h>

float avg();//function prototype



int main(){

   
   float av=avg();  //value of average transferred to av
   printf("average:%f",av);  //no arguments inside main function

    
    

    return 0;
}

float avg(){//function definition
    
    float x,y,z;  //arguments declared here independently
    
    printf("enter three numbers:\n");
    scanf("%f %f %f",&x,&y,&z);
    float average=(x+y+z)/3;
   

    return average;
   
}