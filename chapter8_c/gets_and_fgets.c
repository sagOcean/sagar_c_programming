
/*it is better not to use gets() and instead use fgets()*/

#include <stdio.h>

int main() {
    int secret_code = 123;
    char name[50]; // Very small! Only holds 3 letters + null terminator

    printf("BEFORE: secret_code = %d\n", secret_code);
    printf("Enter a name (type 'ABCDEFGHIJKL'): ");

    // Using the dangerous gets() to prove the point
    //gets(name); //keeps receiving input from the user and put it in another variable(if present)
    fgets(name,50,stdin);

    printf("\nAFTER:  name = %s\n", name);
    printf("AFTER:  secret_code = %d\n", secret_code);

    if (secret_code != 123) {
        printf("\nRESULT: The overflow from 'name' changed 'secret_code'!\n");
    }

    return 0;
}