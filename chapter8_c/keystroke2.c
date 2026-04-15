#include <stdio.h>
#include <conio.h> // For _getch() on Windows

int main() {
    int count = 0;
    char ch;

    printf("Counting keys (Backspace counts, Enter does NOT).\n");
    printf("Press 'Enter' to stop and see the results.\n\n");

    while (1) {
        ch = _getch(); // Catch the key instantly

        if (ch == 13) {    // 13 = Enter key (Exit)
            break;
        }


        // If it wasn't Enter, count it
        count++;
        printf("\rTotal keystrokes: %d", count);
    }

    printf("\n\nFinished! Total count (excluding Enter): %d\n", count);
    return 0;
}