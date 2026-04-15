/*2. Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal. */


#include <stdio.h>

int main() {
    char name[30];

    printf("enter your name: ");

    for(int i=0;i<5;i++){
        scanf("%c",&name[i]);
        fflush(stdin);
    }
    name[5]='\0';
    printf("%s",name);
    return 0;
}