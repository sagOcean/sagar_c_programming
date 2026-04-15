/*1. Create a two-dimensional vector using structures in C. */

#include <stdio.h>

typedef struct vector{
    int x,y;

}vec;

int main() {
    
    vec v[2];
    int i;

    for(i=0;i<2;i++){
        printf("enter x-component%d:\n",i);
        scanf("%d",&v[i].x);
        printf("enter y-component%d:\n",i);
        scanf("%d",&v[i].y);
    }

    for(i=0;i<2;i++){
        printf("%di+%dj\n",v[i].x,v[i].y);
    }
    return 0;
}