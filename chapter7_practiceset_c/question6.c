/*6. Write a program containing functions which counts the number of positive 
integers in an array. */


#include <stdio.h>


void count(int arr[],int size){

    int positive = 0,negative = 0,i;

    for(i=0;i<=size-1;i++){
        if(arr[i]<0){
            negative++;
        }
        else{
            positive++;
        }
    }

    printf("positive integers count:%d\n",positive);
    printf("negative integers count:%d\n",negative);

    

}

int main() {

    int num_array[5] = {-9,8,-6,5,2};
    

    count(num_array,5);
    
    return 0;
}