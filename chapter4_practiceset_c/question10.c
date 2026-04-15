//do qsn 9 with while loop

#include<stdio.h>

int main(){

    int n,i=2;
    x:
    printf("\nenter a number:\n");
    scanf("%d",&n);
    
    if(n==1 || n==0 ||n<0){
        printf("%d is not a prime number.",n);
        // return 0;
        goto x;
    }
    while(i<=(n/2)){

        if(n%i==0){
            printf("the number is not prime.");
            return 0;
        }
        i++;
    }

    printf("the number is prime.");
    

    return 0;
}