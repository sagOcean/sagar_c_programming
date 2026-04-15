/*4. Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice. */


#include <stdio.h>

void slice(){
    char m[20];
    char n[20];
    printf("enter your name: ");
    scanf("%s",m);
    scanf("%s",n);

    printf("first: %s\n",m);
    printf("second: %s",n);
}

int main() {
    slice();

    
    return 0;
}