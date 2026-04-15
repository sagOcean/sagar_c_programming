/*8. Repeat problem 7 for a custom input given by the user. */

#include<stdio.h>
int main() {
    // 3 rows (for three user inputs) and 10 columns (for 1 to 10)
    int arr[3][10];
    int tables[3];
    
    
    
    int i, j;
    for(i=0;i<3;i++)
    {
        printf("enter a number:\n");
        scanf("%d",&tables[i]);
    }
    
    // FILLING the array
    for(i = 0; i < 3; i++) { // Loop runs 3 times (0, 1, 2)
        for(j = 0; j < 10; j++) {
            arr[i][j] = tables[i] * (j + 1);
        }
    }

    // PRINTING the array
    for(i = 0; i < 3; i++) {
        printf("--- Multiplication Table of %d ---\n", tables[i]);
        for(j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", tables[i], j + 1, arr[i][j]);
        }
        printf("\n"); // Add a space between tables
    }

    return 0;
}