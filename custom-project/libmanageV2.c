#include <stdio.h>

#include <string.h>

void bookTake(char bookname[]) {
    FILE *f, *fp;
    f = fopen("bookList2.txt", "r");
    fp = fopen("temp.txt", "w");
    
    if (f == NULL || fp == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    char book[40];
    int id, status;

    while (fscanf(f, "%s %d %d", book, &id, &status) == 3) {
        
        if (strcmp(book, bookname) == 0 && status == 0) {
            status = 1;
            printf("Success: Book '%s' taken.\n", bookname);
        }
        
        
        fprintf(fp, "%s\t%d\t%d\n", book, id, status);
    }

    fclose(f);
    fclose(fp);

    
    remove("bookList2.txt");        
    rename("temp.txt", "bookList2.txt"); 
}
void bookdisplay() {
    FILE *f = fopen("bookList2.txt", "r");
    if (f == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    char book[40];
    int id, status;

    
    while (fscanf(f, "%s %d %d", book, &id, &status) == 3) {
        printf("%s\n", book);
    }

    fclose(f);
}

void bookSearch(char bookname[]) {
    FILE *fp;
    char books[100]; 
    fp = fopen("bookList2.txt", "r");
    
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    int found = 0;
    
    while (fscanf(fp, " %[^\n]", books) == 1) {
        
        // 'books' contains the name AND the status 
        // Used strstr to see if bookname is INSIDE the line 'books'
        if (strstr(books, bookname) != NULL) {
            found = 1;
            break; 
        }
    }

    if (found) {
        printf("Search Result: The book is in our records.\n");
    } else {
        printf("Search Result: The book is not in our records.\n");
    }

    fclose(fp);
} 

char bookIssue(char bookname[]) {
    FILE *f = fopen("bookList2.txt", "r");
    if (f == NULL) 
        return 'E';

    char book[40];
    int id, status;
    char result = 'N';

   
    while (fscanf(f, "%s %d %d", book, &id, &status) == 3) {
        if (strcmp(book, bookname) == 0) { // Exact match
            if (status == 1) {
                printf("Status: The book '%s' is already issued.\n", bookname);
                result = '1';
            } else {
                printf("Status: The book '%s' is available.\n", bookname);
                result = '0';
            }
            break; 
        }
    }

    fclose(f);
    return result; 
}

/*void booksearchId(int userid){
    FILE *f;
    f = fopen("bookList2.txt", "r");
   
    
    if (f == NULL ) {
        printf("Error: Could not open file.\n");
        return;
    }

    char book[40];
    int id, status;

    while (fscanf(f, "%s %d %d", book, &id, &status) == 3) {
        
        if (strcmp(id, userid) == 0 && status == 0) {
            
            printf("Success: Book have'%d' id found.\n", id);
        }
        else
            printf("not found.");
        
        
        
    }

    fclose(f);
    
}*/

int main() {
    char bookName[40];char decision;int bookId;
    bookdisplay();
    printf("enter the book you are looking for:\n");
    scanf(" %39[^\n]",bookName);

    // printf("enter the book id:\n");
    // scanf("%d",&bookId);

    bookSearch(bookName);
    // booksearchId(bookId);
    char y = bookIssue(bookName);
    if(y =='0'){
        printf("do you want to take this book:y or n:\n");
        scanf(" %c",&decision);
        if(decision =='y'){
            bookTake(bookName);
        }
    }
    
    



    return 0;
}