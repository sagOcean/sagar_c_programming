/*9. Create a three–dimensional array and print the address of its elements in 
increasing order. */

#include <stdio.h>

int main() {
    
    int arr[1][2][3];

    

    int size = sizeof(arr)/sizeof(int);
    
    int i,j,k;

    for(i=0;i<1;i++)
    {
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("%d\n",&arr[i][j][k]);
            }
        }

    }
    return 0;
}