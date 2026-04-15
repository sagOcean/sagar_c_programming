#include <stdio.h>

/*void reverseArray(int *arr, int size) {
    int *left = arr;            // Points to first element
    int *right = arr + size - 1; // Points to last element
    int temp;

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;  // Moves the address forward by 4 bytes
        right--; // Moves the address backward by 4 bytes
    }
}*/




// Function to reverse the array
void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    int temp;

    while (left < right) { // Stop once they meet in the middle
        // The Swap Logic
        temp = arr[left];      // Save left value in temp
        arr[left] = arr[right]; // Put right value into left
        arr[right] = temp;     // Put temp (original left) into right

        // Move pointers inward
        left++;
        right--;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    reverseArray(arr, 5);

    printf("Reversed array: \n");
    for (i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}