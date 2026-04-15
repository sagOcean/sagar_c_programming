/*2. Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted. */

#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("question2file.txt","w");
    int num;
    printf("enter the number for multiplication:\n");
    scanf("%d",&num);

    int i,mul=1;
    for(i=1;i<=10;i++){

        fprintf(fp,"%d X %d = %d\n",num,i,num*i);
    }
    fclose(fp);
    return 0;
}