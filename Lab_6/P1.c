// Write a program to implement quick sort algorithm. 

#include <stdio.h>

void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void quickSort(int *arr, int start, int end) {
    if (start >= end)
        return;

    int pivot = start;
    int i = start+1;
    int j = end;
    
    while (i <= j) {
        while (i <= end && arr[pivot] > arr[i]) i++;
        while (j >= start && arr[pivot] < arr[j]) j--;

        if (i < j) 
            swap(arr, i++, j--);
    }
    swap(arr, pivot, j);

    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
}

int main() {
    int arr[] = {7, 3, 8, 2, 4, 1};
    int size = 6;

    quickSort(arr, 0, size - 1);

    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
