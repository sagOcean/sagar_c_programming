#include <stdio.h>

/*
in call by value, the main() function creates a copy of the declared values(which have different memory address) and 
sends that to the function that we call.the user-defined function then make changes/runs the program inside it using 
that copied variable. it doesnt make any changes to the original values in the main() function.

*/

void tryToChange(int copyOfNum) //2. here 10 is transferred from originalNum to copyOfNum and the value of copyOfNum becomes 10

{
    copyOfNum = 999; // 3. We change the copy to 999
    printf("Inside function: %d\n", copyOfNum); // 4. here 999 will be the output but it hasnt changed originalNum value
}

int main() 
{
    int originalNum = 10;
    
    tryToChange(originalNum); //1.tryTochange(10)
    
    printf("Inside main: %d\n", originalNum); // 5. What will this print? this will still be 10
    return 0;
}