#include <stdio.h>

int fibonacci(int);

int main() {
    int n, i, term;

    printf("Enter maximum value: ");
    scanf("%d", &n);

    for(i = 1; ; i++) {
        term = fibonacci(i);
        if(term > n)
            break;
        printf("%d ", term);
    }

    return 0;
}

int fibonacci(int n) {
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
