#include <stdio.h>

int main() {
    int count = 0;
    char ch;

    printf("Type something and press Enter to count the keystrokes: \n");

    // getchar() reads one character at a time from stdin
    while ((ch = getchar()) != '\n') {
        count++;
    }

    // We add 1 to the count if you want to include the 'Enter' key itself
    printf("Total characters (excluding Enter): %d\n", count);
    printf("Total keystrokes (including Enter): %d\n", count + 1);

    return 0;
}