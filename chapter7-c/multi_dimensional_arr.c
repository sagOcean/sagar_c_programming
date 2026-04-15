
//trying to remember how to make 2X2 matrix


#include <stdio.h>

int main() {
    
    int mat[2][2]; //fixed multi-dimensional array structure
    int i,j;

    for(int i=0;i<2;i++) // number of rows
    {

        for(int j=0;j<2;j++) // number of columns or you can say the elements in that row
        {

            printf("enter mat[%d][%d]:\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("2X2 matrix:\n");
    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++)
        {

            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}