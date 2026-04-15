/*3. Write your own version of strlen function from <string.h> */

#include <stdio.h>

int strleng(){
    int count = 0;
    char name[100];
    printf("enter your name: ");
    scanf("%[^\n]",name);

    while(name[count] != '\0')
    {
        count++;
    }
    return count;

}

int main() {
    

    int y = strleng();
   
    printf("%d",y);
    return 0;
}