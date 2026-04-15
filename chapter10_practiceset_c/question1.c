/*1. Write a program to read three integers from a file. */

#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("question1file.txt","r");

    int i,num;
    for(i=1;i<=3;i++){
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        
    }
    fclose(fp);
    return 0;
}