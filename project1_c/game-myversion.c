/*

We will write a program that generates a random number and asks the player to guess 
it. If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
number please”. 
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number. 
Hint: Use loop & use a random number generator. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num,user_n,i,count=0;

    srand(time(0));

    num = (rand() % 100) + 1;//generates a random number between 1 and 100
    printf("%d",num);

  
   
    
     x:
    for(i=1;i<=num;i++)
    {
       
        printf("\nenter a number between 1 and 100:\n");
        scanf("%d",&user_n);
        if(user_n>100){

            printf("sorry,you can't enter number greater than 100.");
        }
       

        if(user_n>num)
        {
            printf("\nlower number please.");
            count++;
            goto x;
            
        }
    else if(user_n<num)
        {
            printf("\nhigher number please.");
            count++;
            goto x;
        }
    else
        {
            printf("congrats! you guessed the correct number in %d guesses.",count);
            break;
        }

    }

    return 0;
}
