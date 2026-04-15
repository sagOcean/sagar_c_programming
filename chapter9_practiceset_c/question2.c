#include <stdio.h>

typedef struct vector {
    int x, y;
} vec;

// 1. The function returns a 'vec' type
// 2. It accepts two 'vec' structures as arguments (no stars *)
vec sumVector(vec v1, vec v2) {
    vec result; // Create a local temporary vector
    
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    
    return result; // Send the entire structure back to main
}

int main() {
    vec v1, v2, vSum;

    // Input for Vector 1
    printf("Enter x and y for vector 1: ");
    scanf("%d %d", &v1.x, &v1.y);

    // Input for Vector 2
    printf("Enter x and y for vector 2: ");
    scanf("%d %d", &v2.x, &v2.y);

    // 3. Call the function and assign the returned value to vSum
    vSum = sumVector(v1, v2);

    printf("\nSum Vector: (%d, %d)\n", vSum.x, vSum.y);

    return 0;
}