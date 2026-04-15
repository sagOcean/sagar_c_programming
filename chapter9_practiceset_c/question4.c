/*4. Write a program to illustrate the use of arrow operator → in C. */

#include <stdio.h>

struct student{
    char name[50];
    int roll;
};
int main()
{

    struct student s1;
    struct student* ptr;

    ptr = &s1;

    printf("enter the name of student: \n");
    scanf("%s",ptr->name);
    printf("enter the roll number: \n");
    scanf("%d",&ptr->roll);

    printf("%s\n",s1.name);
    printf("%d",s1.roll);
    

    return 0;
}