/*

6. Write a program to find greatest of four numbers entered by the user. 

*/

/*
method 2 of writing the same code:
#include<stdio.h>

int main() {
    int a, b, c, d, max;

    printf("Enter 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("%d is the greatest.", max);

    return 0;
}

*/

/*
method 3 of writing the same code:
#include<stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
        printf("%d is the greatest.", a);
    else if (b >= a && b >= c && b >= d)
        printf("%d is the greatest.", b);
    else if (c >= a && c >= b && c >= d)
        printf("%d is the greatest.", c);
    else
        printf("%d is the greatest.", d);

    return 0;
}


*/

#include<stdio.h>

int main(){

    int a, b, c, d;
    printf("enter 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) 
    {
        if (a > c) {
            if (a > d)
                printf("%d is the greatest.", a);
            else
                printf("%d is the greatest.", d);
        } else {   // a <= c
            if (c > d)
                printf("%d is the greatest.", c);
            else
                printf("%d is the greatest.", d);
        }
    }
    else 
    {
        if (b > c) 
        {
            if (b > d)
                printf("%d is the greatest.", b);
            else
                printf("%d is the greatest.", d);
        }
        else 
        {
            if (c > d)
                printf("%d is the greatest.", c);
            else
                printf("%d is the greatest.", d);
        }
    }
    

    return 0;
}
