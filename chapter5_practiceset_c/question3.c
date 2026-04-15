// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
// earth. Consider g = 9.8m/s2. 

//function with return value but no arguments

#include<stdio.h>

float force();
int main(){

    float x=force();
    printf("force of attraction:%.2f N",x);

    return 0;
}
float force(){

    float mass,force;
    printf("enter the mass:\n");
    scanf("%f",&mass);

    force= mass*9.8;
    return force;
}