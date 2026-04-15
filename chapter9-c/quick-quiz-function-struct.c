/* Complete this show function to display the content of employee. */
#include <stdio.h>

struct employee 
{ 
    int code; // This declares a new user defined data type! 
    float salary; 
    char name[10]; 
};
 

void show(struct employee e[2]){
    int i;
    for(i=0;i<2;i++){
        printf("enter code%d:\n",i);
        scanf("%d",&e[i].code);
        printf("enter salary%d:\n",i);
        scanf("%f",&e[i].salary);
        printf("enter name%d:\n",i);
        scanf("%s",e[i].name);
    }

    for(i=0;i<2;i++){
        printf(" code%d:%d\n",i,e[i].code);
        // scanf("%d",&e[i].code);
        printf(" salary%d:%f\n",i,e[i].salary);
        // scanf("%f",&e[i].salary);
        printf(" name%d:%s\n",i,e[i].name);
        // scanf("%s",e[i].name);
    }

}

int main() {
    struct employee employees[2]; // 1. Create the storage here
    
    show(employees); // 2. CALL the function and pass the array
    
    return 0;
}