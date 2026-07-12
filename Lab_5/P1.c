// Write a program to implement binary search algorithm using iterative method. 


#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int start = 0, end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) return 1;

        if (target < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }

    return 0;
}


int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter element to search: ");
    scanf("%d", &target);

    if (binarySearch(arr, size, target))
        printf("Element found.\n");
    else
        printf("Element not found.\n");

    return 0;
}
