/*8. Create a structure representing a bank account of a customer. What fields did 
you use and why? */


#include <stdio.h>

typedef struct bankAccount{

    char name[50];
    long int accountNo;
    char address[50];
    char dob[30];
}Acc;

int main() {
    
    Acc c1;

    Acc *ptr;

    ptr = &c1;

    printf("enter the name of the customer: \n");
    gets(ptr->name);

    printf("enter the account number: \n");
    scanf("%d",&ptr->accountNo);
    getchar();

    printf("enter the address: \n");
    gets(ptr->address);

    printf("\nenter your date of birth: ");
    gets(ptr->dob);

    puts(ptr->name);
    printf("%d\n",ptr->accountNo);
    puts(ptr->address); 
    puts(ptr->dob);


    return 0;
}