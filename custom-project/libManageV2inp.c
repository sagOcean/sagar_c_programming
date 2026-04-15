#include <stdio.h>


typedef struct book{
    char bookName[50];
    int bookId;
    int status;
}Book;



int main() {

    Book b[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter the book name:\n");
        scanf("%s",b[i].bookName);
        printf("enter the book id:\n");
        scanf("%d",&b[i].bookId);
        printf("enter the status:\n");
        scanf("%d",&b[i].status);
    }

    FILE *fp;
    fp = fopen("bookList2.txt","a");

    for(i=0;i<3;i++){
        fprintf(fp,"%s\t%d\t%d\n",b[i].bookName,b[i].bookId,b[i].status);
    }
    fclose(fp);
    



    return 0;
}