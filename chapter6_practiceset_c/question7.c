/*7. Try problem 3 using call by value and verify that it does not change the value of 
the said variable. */

#include <stdio.h>

int change(int *x)
{
    // int y;
    *x= 10* *x;
    printf("changed value inside function:%d\n",*x);


}


int call_by_value_chane(int x){

    x=5;
    return x;
}

int main() {
    int i=4;
    printf("current value of i:%d\n",i);


    change(&i);
    printf("value of i in main function:%d\n",i); // 10 times of i

    
    int value=call_by_value_chane(i); // returned value of x from call_by_value_chane() function
    printf("value of x in call by value function is:%d\n",value);
    printf("but the value of i is still %d and not %d\n.",i,value);

    return 0;
}  