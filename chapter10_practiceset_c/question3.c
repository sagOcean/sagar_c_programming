/*3. Write a program to read a text file character by character and write its content 
twice in separate file. */

#include <stdio.h>

int main() {
    FILE *fp, *fp2;
    int ch;

    // 1. Open source for the first pass
    fp = fopen("question3read.txt", "r");
    fp2 = fopen("question3write.txt", "w"); // "w" clears the file before writing

    if (fp == NULL || fp2 == NULL) {
        printf("Error: Could not open files.\n");
        return 1;
    }

    // --- FIRST PASS ---
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, fp2);
    }

    // 2. Close and Re-open to reset the position to the beginning
    fclose(fp);
    fp = fopen("question3read.txt", "r");

    // --- SECOND PASS ---
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, fp2);
    }

    // 3. Final Cleanup
    fclose(fp);
    fclose(fp2);

    printf("File content written twice successfully.\n");
    return 0;
}