#include <stdio.h>

int main() 
{
    // we can reinitialize variable here with different values and it will print the latest one
    char *ptr = "harry"; 
    ptr = "sagar";

    printf(ptr);

    /*
    but we cannot do this(reinitialization of same variable using array) 

    char st[]="hello";
    char st[]= "hi";
    printf("%s",st);
    
    */
    
    return 0;
}