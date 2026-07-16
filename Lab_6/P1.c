#include <stdio.h>

void swap(int *arr, int start, int end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

void quick(int* arr, int start, int end) {
    if (start >= end) return;
    int i = start;
    int j = end;
    int pivot = arr[start];

    while (start < end) {
        while (start < j && pivot > arr[start]) {
            start++;
        }

        end--;
        while (end >= start && pivot < arr[end]) {
            end--;
        }

        if (start < end) {
            swap(arr, start, end);
        }
        else {
            swap(arr, i, end);
        }
    }

    quick(arr, i, end-1);
    quick(arr, end+1, j);
}

int main() {    
    int arr[6] = {99, 29, 31, 1, 12, 27};

    quick(arr, 0, 6);

    for (int i=0; i<6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
