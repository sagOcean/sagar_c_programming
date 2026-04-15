/*9. Write a structure capable of storing date. Write a function to compare those 
dates. */

#include <stdio.h>

// Define the structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
int compareDates(struct Date d1, struct Date d2) {
    // 1. Check Year
    if (d1.year < d2.year) return -1;
    if (d1.year > d2.year) return 1;

    // 2. Check Month (Years must be equal if we are here)
    if (d1.month < d2.month) return -1;
    if (d1.month > d2.month) return 1;

    // 3. Check Day (Years and Months must be equal)
    if (d1.day < d2.day) return -1;
    if (d1.day > d2.day) return 1;

    // Dates are identical
    return 0;
}

int main() {
    struct Date date1 = {22, 2, 2026};
    struct Date date2 = {15, 8, 2025};

    int result = compareDates(date1, date2);

    if (result == 0) {
        printf("The dates are the same.\n");
    } else if (result < 0) {
        printf("Date 1 is earlier than Date 2.\n");
    } else {
        printf("Date 1 is later than Date 2.\n");
    }

    return 0;
}