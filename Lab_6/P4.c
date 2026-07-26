// Merge Two Sorted Arrays Without Extra Space. 
// Given two sorted arrays a[] and b[] of size n and m respectively, merge both the arrays and rearrange the elements such that the smallest n 
// elements are in a[] and the remaining m elements are in b[]. All elements in a[] and b[] should be in sorted order. 

// Examples:  
// Input: a[] = [2, 4, 7, 10], b[] = [2, 3] ; Output: a[] = [2, 2, 3, 4], b[] = [7, 10]  
// Explanation: Combined sorted array = [2, 2, 3, 4, 7, 10], array a[] contains smallest 4 elements: 2, 2, 3 and 4, and array b[] contains remaining 2 
// elements: 7, 10. 

// Input: a[] = [1, 5, 9, 10, 15, 20], b[] = [2, 3, 8, 13]; Output: a[] = [1, 2, 3, 5, 8, 9], b[] = [10, 13, 15, 20] 
// Explanation: Combined sorted array = [1, 2, 3, 5, 8, 9, 10, 13, 15, 20], array a[] contains smallest 6 elements: 1, 2, 3, 5, 8 and 9, and array b[] 
// contains remaining 4 elements: 10, 13, 15, 20. 

// Input: a[] = [0, 1], b[] = [2, 3]; Output: a[] = [0, 1], b[] = [2, 3]  
// Explanation: Combined sorted array = [0, 1, 2, 3], array a[] contains smallest 2 elements: 0 and 1, and array b[] contains remaining 2 elements: 
// 2 and 3. 

#include <stdio.h>

void sort(int *arr, int size) {
    
    for(int i=1; i<size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[++j] = key;
    }
}

void mergeSortedWithOutExSpace(int *a, int sizeA, int *b, int sizeB) {
    int i = sizeA - 1;
    int j = 0;

    while (i >= 0 && j < sizeB) {
        if (a[i] > b[j]) {
            int temp = a[i];
            a[i] = b[j];
            b[j] = temp;
        }
        else break;
        i--;
        j++;
    }

    sort(a, sizeA);
    sort(b, sizeB);
}

int main() {
    int a[] = {2, 4, 7, 10};
    int sizeA = 4;
    int b[] = {2, 3};
    int sizeB = 2;

    mergeSortedWithOutExSpace(a, sizeA, b, sizeB);

    for (int i=0; i<sizeA; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i=0; i<sizeB; i++) {
        printf("%d ", b[i]);
    } 

    return 0;
}
