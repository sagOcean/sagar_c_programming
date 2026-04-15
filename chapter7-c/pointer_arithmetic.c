#include <stdio.h>

int main() {
    // your code here

    int a=3;
    int* p = &a;
    printf("memory address of a:%u\n",&a);
    printf("memory address of a using pointer p:%u\n",p);
    p++; // for integer the increment of pointer will be of 4 bytes
    printf("memory address after pointer increment:%u\n",p);

    for(int i=1;i<=3;i++){
        printf("\n");
    }
    
    
    int b=4.5;
    int* q=&b;
    printf("memory address of b:%u\n",&b);
    printf("memory address of b using pointer q:%u\n",q);
    q++; // for float the increment of pointer will be of 4 bytes
    printf("memory address after pointer increment:%u\n",q);


    for(int i=1;i<=3;i++){
        printf("\n");
    }

    char c='x';
    char* r=&c;
    printf("memory address of c:%u\n",&c);
    printf("memory address of c using pointer r:%u\n",r);
    r++; // for char the increment of pointer will be of 1 byte
    printf("memory address after pointer increment:%u\n",r);



    return 0;
}