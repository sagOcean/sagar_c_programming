/*5. Write a program with a structure representing a complex number. */

#include <stdio.h>

struct complex{
    int real,imag;
};

int main() {

    struct complex c1;
    struct complex *ptr;

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