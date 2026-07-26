// Write a program to implement merge sort algorithm.

#include <stdio.h>

void merge(int *arr, int start, int end, int mid) {
    int b[100];
    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) 
            b[k++] = arr[i++];
        else 
            b[k++] = arr[j++];
    }

    while (i <= mid) {
        b[k++] = arr[i++];
    }

    while (j <= end) {
        b[k++] = arr[j++];
    }

    for (int in=start; in<=end; in++) {
        arr[in] = b[in];
    }
}

void mergeSort(int *arr, int start, int end) {
    if (start >= end) return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end, mid);
}

int main() {
    int arr[] = {7, 3, 8, 2, 4, 1};
    int size = 6;

    mergeSort(arr, 0, size - 1);

    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
