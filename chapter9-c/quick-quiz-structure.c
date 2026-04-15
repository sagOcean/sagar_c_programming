/* Write a program to store the details of 3 employees from user defined data. 
Use the structure declared above. */

#include <stdio.h>
struct employee 
{ 
    int code; // This declares a new user defined data type! 
    float salary; 
    char name[10]; 
}; 

int main() {
    struct employee e[3]; //to store multiple people's data e[no. of people] is required

    int i;
    for(i=0;i<=2;i++){
        printf("enter the code of employee%d:\n ",i);
        scanf("%d",&e[i].code);

        printf("enter the salary of employee%d:\n ",i);
        scanf("%f",&e[i].salary);

        printf("enter the name of employee%d:\n ",i);
        scanf("%s",e[i].name);
        
    }

    for(i=0;i<=2;i++){
        printf("name of employee%d:%s\n",i,e[i].name);
        printf("code of employee%d:%d\n",i,e[i].code);
        printf("salary of employee%d:%f\n",i,e[i].salary);
    }
    
    
    
    return 0;
}