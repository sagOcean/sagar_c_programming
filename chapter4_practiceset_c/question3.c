/*What can be done using one type of loop can also be done using the other two 
types of loops – true or false? 

the answer is yes and lets do this using the below example:

    for(i=1;i<=10;i++){

        printf("%d X %d = %d\n",n,i,n*i);
    }

*/ 
#include<stdio.h>

int main(){

    int n,i=1;
    printf("enter a number:\n");
    scanf("%d",&n);

    printf("multiplication table of %d:\n",n);

    // printf("%d",-5*-4);

    while(  i<=10){
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }

    return 0;
}