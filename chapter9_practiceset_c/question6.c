/*6. Create an array of 5 complex numbers created in Problem 5 and display them 
with the help of a display function. The values must be taken as an input from 
the user. */

#include <stdio.h>

struct complex{
    int real,imag;
};

int main() {

    struct complex c[5];
    struct complex *ptr;

    int i;
    for(i=0;i<5;i++){
        
    }
   

    for(i=0;i<5;i++)
    {
        // ptr = &c[i];
        printf("enter the real part%d: ",i);
        scanf("%d",&c[i].real);
        // scanf("%d",&ptr->real);

        printf("\nenter the imaginary part%d: ",i);
        scanf("%d",&c[i].imag);
        // scanf("%d",&ptr->imag);
    }
    
    for(i=0;i<5;i++){
        // ptr = &c[i];
        printf("%d+%di\n",c[i].real,c[i].imag);
        // printf("%d+%di\n",ptr->real,ptr->imag);
        

    }
    
    
    return 0;
}