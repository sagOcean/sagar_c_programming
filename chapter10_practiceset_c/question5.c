/*5. Write a program to modify a file containing an integer to double its value. */

#include <stdio.h>

int main() {
    FILE *fp,*fp2;
    int num;
    fp = fopen("question5file.txt","r");
    fscanf(fp,"%d",&num);

    num = num*2;
    fp = fopen("question5file.txt","a");
    fprintf(fp,"%d",num);
    fclose(fp);
    


    return 0;
}