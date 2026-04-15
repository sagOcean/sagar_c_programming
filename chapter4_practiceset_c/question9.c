// Write a program to check whether a given number is prime or not using loops. 


#include<stdio.h>

int main(){


    int n,i;
    printf("enter a number:\n");
    scanf("%d",&n);

    for(i=2;i<=(n/2);i++){
       if(n%i==0){
        printf("the number is not prime/or you can say it's composite.\n");
        break;
       }
       
        
    }
    if(i<=n/2){
        printf("loop stopped when it discovered the first factor of the number:%d apart from the pre-\ndetermined condition of prime numbers.",i);
    }
    else{
        printf("the number is prime.");
    }
    
    
    
   
    return 0;
}