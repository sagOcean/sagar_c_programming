/*7. Write problem 5’s structure using ‘typedef’ keywords. */

#include <stdio.h>

typedef struct complex{
    int real,imag;
}com;

int main() {

    // struct complex c1;
    com c1;
    // struct complex *ptr;
    com *ptr;

    ptr = &c1;
    printf("enter the real part: ");
    scanf("%d",&c1.real);
    // scanf("%d",&ptr->real);

    printf("\nenter the imaginary part: ");
    scanf("%d",&c1.imag);
    // scanf("%d",&ptr->imag);

    printf("%d+%di",c1.real,c1.imag);
    
    return 0;
}