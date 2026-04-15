/*7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
and 9 respectively. */

#include <stdio.h>

int main() {
    // 3 rows (for 2, 7, and 9) and 10 columns (for 1 to 10)
    int arr[3][10];
    int tables[3] = {2, 7, 9}; // The "multiplier" for each row
    int i, j;

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
            printf("%d x %d = %d\n", tables[i], j+1, arr[i][j]);
        }
        printf("\n"); // Add a space between tables
    }

    return 0;
}