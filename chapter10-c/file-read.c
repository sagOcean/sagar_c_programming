#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("abc.txt","r");
    char ch[30];

    while(fgets(ch,30,fp)) // reach to fp and get the text and put it in ch
    {
        printf("%s",ch);
    }

    fclose(fp);
    return 0;
}