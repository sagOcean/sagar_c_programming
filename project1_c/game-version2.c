#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, user_n;

    srand(time(0));
    num = (rand() % 100) + 1;   // random number between 1 and 100

    for (int i = 1; ; i++) {       // i counts valid guesses
        printf("\nEnter a number between 1 and 100: ");
        scanf("%d", &user_n);

        if (user_n < 1 || user_n > 100) 
        {
            printf("Invalid input! Please enter a number between 1 and 100.\n");
            continue;   // do NOT increase i
        }

        // Only valid guesses increment i
        if (user_n > num) 
        {
            printf("Lower number please.\n");
        } 
        else if (user_n < num) 
        {
            printf("Higher number please.\n");
        } 
        else 
        {
            printf("\nCongrats! You guessed the correct number in %d valid guesses.\n", i);
            break;
        }

          // increment for valid guess
    }

    return 0;
}

