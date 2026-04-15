/*5. Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main(). */

#include <stdio.h>

void sum_avg(int* x, int* y, int* s, float* a) {
    *s = *x + *y;
    *a = (*x + *y) / 2.0;
}

int main() {
    int a, b, summation;
    float average;

    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);

    sum_avg(&a, &b, &summation, &average);

    printf("sum: %d\n", summation);
    printf("average: %.2f\n", average);

    return 0;
}
