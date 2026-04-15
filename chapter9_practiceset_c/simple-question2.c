#include <stdio.h>

struct vector{
    int x,y;
};

int main() {
    struct vector v1;
    struct vector v2;
    struct vector v3;

    printf("enter x1:\n");
    scanf("%d",&v1.x);

    printf("enter y1:\n");
    scanf("%d",&v1.y);

    printf("enter x2:\n");
    scanf("%d",&v2.x);

    printf("enter y2:\n");
    scanf("%d",&v2.y);

    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;

    printf("%di+%dj",v3.x,v3.y);
    return 0;
}