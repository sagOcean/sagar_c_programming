//Write a recursive function to calculate the sum of first ‘n’ natural numbers. 

#include<stdio.h>


int sum_natural(int);
int main(){

    int n;
    printf("enter the digit upto which you want the sum:\n");
    scanf("%d",&n);

    printf("sum of %d natural numbers:%d.",n,sum_natural(n) /*function call:sum_natural(n) accepts the return value.*/);


    return 0;
}
//function definition
int sum_natural(int n)//argument
{

    if(n==1){
        return 1;
    }
    return sum_natural(n-1)+n; //return value
}