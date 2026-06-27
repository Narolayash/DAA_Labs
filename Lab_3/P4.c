#include <stdio.h>
#include <limits.h> 

void sort (int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        int flag = 0;
        for (int j=0; j<size-1-i; j++) {
            if (arr[j] >= arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0) break;
    }
}

int main () {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arry[n];

    printf("--- enter the elements --- \n");
    for (int i=0; i<n; i++) {
        printf("element %d: ", i+1);
        scanf("%d", &arry[i]);
    }

    sort(arry, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arry[i]);
    }

    printf("\n");
    int min = INT_MAX;
    for (int i=0; i<n-1; i++) {
        if (arry[i+1] - arry[i] < min) {
            min = arry[i+1] - arry[i];
        }
    }
    

    printf("min difference = %d ", min);
}
