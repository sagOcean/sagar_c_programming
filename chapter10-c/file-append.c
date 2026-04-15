#include <stdio.h>

int main() {
    //writing mode
    FILE *fp;
    fp = fopen("write.txt","a");
    char str[100];
    printf("enter your string:\n");
    fgets(str,sizeof(str),stdin);

    fprintf(fp,"%s",str);
    fclose(fp);
   
    

    return 0;
}