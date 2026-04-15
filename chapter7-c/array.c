#include <stdio.h>

int main() {
    // your code here
    int marks[3];
    printf("enter your marks:\n");
    scanf("%d",&marks[0]);

    printf("enter your marks:\n");
    scanf("%d",&marks[1]);

    printf("enter your marks:\n");
    scanf("%d",&marks[2]);

    printf("arrayed marks:%d %d %d",marks[0],marks[1],marks[2]);
    return 0;
}