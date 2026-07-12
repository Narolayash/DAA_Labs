// Write a program to implement binary search algorithm using recursive method. 

#include <stdio.h>

int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) return 1;

    if (target < arr[mid]) 
        return binarySearch(arr, start, mid - 1, target);
    else 
        return binarySearch(arr, mid + 1, end, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    if (binarySearch(arr, 0, n - 1, target) == 1)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}
