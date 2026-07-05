// Write a program to sort array elements using heap sort. 

#include <stdio.h>
#include <time.h>

void swap(int nums[], int p, int q) {
    int temp = nums[p];
    nums[p] = nums[q];
    nums[q] = temp;
}

void heapifying(int nums[], int n, int curr) {
    int largest = curr;
    int left = curr * 2 + 1;
    int right = curr * 2 + 2;

    if (left < n && nums[left] > nums[largest]) 
        largest = left;
    
    if (right < n && nums[right] > nums[largest])
        largest = right;

    if (largest != curr) {
        swap(nums, curr, largest);
        heapifying(nums, n, largest);
    }
}

void heapSort(int nums[], int n) {
    for (int i=n/2 - 1; i>=0; i--) {
        heapifying(nums, n, i);
    }

    for (int i=n-1; i>0; i--) {
        swap(nums, 0, i);
        heapifying(nums, i, 0);
    }
}

int main () {
    double cputime;
    clock_t start, end;

    FILE *fp;
    // fp = fopen("best1000.txt", "r");
    // fp = fopen("best10000.txt", "r");
    // fp = fopen("best100000.txt", "r");
    // fp = fopen("worst1000.txt", "r");
    // fp = fopen("worst10000.txt", "r");
    // fp = fopen("worst100000.txt", "r");
    // fp = fopen("avg1000.txt", "r");
    // fp = fopen("avg10000.txt", "r");
    fp = fopen("avg100000.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 100000; // change here
    int arry[n];
    for (int i = 0; i < n; i++) {
        if (fscanf(fp, "%d", &arry[i]) != 1) {
            printf("Read failed at %d\n", i);
            return 1;
    }
}

    start = clock();
    heapSort(arry, n);
    end = clock();

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("runtime: %f", cputime);

    fclose(fp);

    return 0;
}