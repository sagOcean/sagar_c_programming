/*3. Write a program to change the value of a variable to ten times of its current 
value. */

#include <stdio.h>

int change(int *x)
{
    // int y;
    *x= 10* *x;
    printf("changed value inside function:%d\n",*x);


}

int main() {
    int i=4;
    printf("current value of i:%d\n",i);


    change(&i);
    printf("value of i in main function:%d\n",i);

    return 0;
}