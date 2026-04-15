#include <stdio.h>

int main() {
    //writing mode
    FILE *fp;
    fp = fopen("write.txt","w");
    char str[100];
    printf("enter your string:\n");
    fgets(str,sizeof(str),stdin);

    fprintf(fp,"%s",str);
    fclose(fp);
    /*
    reading mode:
    FILE* fp2;
    fp2 = fopen("write.txt","r");
    char str2[100];
    while(fgets(str2,100,fp2)){
        printf("%s",str2);
    }
    fclose(fp2);
    */
    

    return 0;
}