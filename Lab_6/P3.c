// Move all Zeros to End of Array. 
// Given an array of integers arr[], move all the zeros to the end of the array while maintaining the relative order of all non-zero elements. 

// Examples:  

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]; Output: [1, 2, 4, 3, 5, 0, 0, 0] 
// Explanation: There are three 0s that are moved to the end. 

// Input: arr[] = [10, 20, 30]; Output: [10, 20, 30] 
// Explanation: No change in array as there are no 0s. 

// Input: arr[] = [0, 0]; Output: [0, 0] 
// Explanation: No change in array as there are all 0s. 

#include <stdio.h>

void moveZeros(int *arr, int size) {
    int i=0;

    for (int j=0; j<size; j++) {
        if (arr[j] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }
}

int main() {
    int size = 8;
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    
    moveZeros(arr, size);

    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
