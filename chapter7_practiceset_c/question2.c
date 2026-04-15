/*2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element: 
(i) 
True. 
(ii) 
(iii) 
False. 
Depends.    the answer is false it will point to fourth element of the array.*/

#include <stdio.h>

int main() {
    int s[3]={5,6,7};

    int* ptr = &s[0];

    // printf("%d",*(s+2));
    printf("%d",* (ptr+2)); // if *ptr +2 is written, it will calculate *ptr first and then does +2

    return 0;
}