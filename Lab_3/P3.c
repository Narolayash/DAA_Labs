// Write a program to sort array elements using selection sort. Read n elements given by user from file and observe cpu time taken.

#include <stdio.h>
#include <time.h>

void selectionSort(int arry[], int n) {
    for (int i=0; i<n-1; i++) {
        int minIndex = i;
        for (int j=i+1; j<n; j++) {
            if (arry[minIndex] > arry[j]) {
                minIndex = j;
            }
        }
        int temp = arry[i];
        arry[i] = arry[minIndex];
        arry[minIndex] = temp;
    }
}

int main () {
    // int arry[] = {12, 6, 2, 7, 35};
    // int n = 5;

    // selectionSort(arry, n);

    // for (int i =0 ; i< n; i++) {
    //     printf("%d ", arry[i]);
    // }

    double cputime;
    clock_t start, end;

    FILE *fp;
    fp = fopen("best1000.txt", "r");
    // fp = fopen("best10000.txt", "r");
    // fp = fopen("best100000.txt", "r");
    // fp = fopen("worst1000.txt", "r");
    // fp = fopen("worst10000.txt", "r");
    // fp = fopen("worst100000.txt", "r");
    // fp = fopen("avg1000.txt", "r");
    // fp = fopen("avg10000.txt", "r");
    // fp = fopen("avg100000.txt", "r");

    if (fp == NULL) {
        printf("unable to open file.\n");
        return 1;
    }

    int n = 1000; // change here
    int arry[n];

    for (int i=0; i<n; i++) {
        fscanf(fp, "%d", &arry[i]);
    }
    fclose(fp);

    // for (int i=0; i<n; i++) {
    //     printf("%d ", arry[i]);
    // }

    start = clock();
    selectionSort(arry, n);
    end = clock();

    // for (int i=0; i<n; i++) {
        // printf("%d ", arry[i]);
    // }

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("cuptime: %f", cputime);

    return 0;
}
