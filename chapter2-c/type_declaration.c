/* this is how to perform type declaration in c. they are:

int--> this is for integer data types. ex: 3,4,67
float--> this is for float/point/decimal data types. ex: 56.77,34.5
char--> this is for single characters. ex: a,A
str--> this is for representing multiple characters/strings. ex: apple



the corresponding syntax for the above data types will be listed below.





*/

#include<stdio.h>

int main()
{

    int a=5;
    float b= 6.5;
    char c='h';// char data type(single character) must be enclosed in single quotations,not double
    char ss[100]= "hello my name is sagar.";//for multiple characters/string,it should be enclosed in double quotation

    printf("%d\n %f\n %c\n", a,b,c);
    printf("%s",ss);

    return 0;
}