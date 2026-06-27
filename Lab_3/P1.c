// Write a program to sort array elements using bubble sort. Read n elements given by user from file and observe cpu time taken.

#include <stdio.h>
#include <time.h>

void bubbleSort (int arry[], int n) {

    for (int i=0; i<n-1; i++) {
        int flag = 1;
        for (int j=0; j<n-1-i; j++) {
            if (arry[j] > arry[j+1]) {
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag) return;
    }
}

int main () {
    double cputime;
    clock_t start, end;

    // int arry[] = {46, 2, 12, 85, 1, 78, 52, 96, 12};
    // int n = sizeof(arry) / sizeof(int);
    // bubbleSort(arry, n);

    // for (int i=0; i<n; i++) {
    //     printf("%d ", arry[i]);
    // }


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
    for (int i=0; i<n; i++) {
        fscanf(fp, "%d", &arry[i]);
    }

    start = clock();
    bubbleSort(arry, n);
    end = clock();

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("runtime: %f", cputime);

    fclose(fp);

    return 0;
}
