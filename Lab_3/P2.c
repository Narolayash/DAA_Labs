// Write a program to sort array elements using insertion sort. Read n elements given by user from file and observe cpu time taken. 

#include <stdio.h>
#include <time.h>

void insertionSort(int arry[], int n) {
    for (int i=1; i<n; i++) {
        int key = arry[i];

        int j = i-1;
        while (j>=0 && arry[j] > key) {
            arry[j+1] = arry[j];
            j--;
        }
        arry[j + 1] = key;
    }
}

int main () {
    // int arry[] = {12, 6, 2, 7, 35};
    // int n = 5;

    // insertionSort(arry, n);

    // for (int i =0 ; i< n; i++) {
    //     printf("%d ", arry[i]);
    // }

    double cputime;
    clock_t start, end;

    FILE *fp;
    // fp = fopen("best1000.txt", "r");
    // fp = fopen("best10000.txt", "r");
    // fp = fopen("best100000.txt", "r");
    // fp = fopen("worst1000.txt", "r");
    // fp = fopen("worst10000.txt", "r");
    // fp = fopen("worst100000.txt", "r");
    fp = fopen("avg1000.txt", "r");
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
    insertionSort(arry, n);
    end = clock();

    // for (int i=0; i<n; i++) {
        // printf("%d ", arry[i]);
    // }

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("cuptime: %f", cputime);

    return 0;
}
