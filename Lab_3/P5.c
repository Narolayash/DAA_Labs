#include <stdio.h>
#include <limits.h> 

void sort (int arr[][2], int size) {
    for (int i=0; i<size-1; i++) {
        int flag = 0;
        for (int j=0; j<size-1-i; j++) {
            if (arr[j][0] > arr[j + 1][0]) {
                // first element
                int temp = arr[j][0];
                arr[j][0] = arr[j + 1][0];
                arr[j + 1][0] = temp;

                // second element
                temp = arr[j][1];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][1] = temp;
                flag = 1;
            }
        }

        if (flag == 0) break;
    }
}

int main () {
    int n = 5;
    int arr[][2] =  {{2, 4}, {1, 2}, {7, 8}, {5, 6}, {6, 8}};

    // int n = 3;
    // int arr[][2] =  {{1, 4}, {10, 15}, {7, 10}};

    for (int i=0; i<n; i++) {
        printf("{ ");
        for (int j=0; j<2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("}");
    }
    printf("\n");
    sort(arr, 5);

    for (int i=0; i<n; i++) {
        printf("{ ");
        for (int j=0; j<2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("}");
    }

    int isoverlaps = 0;
    for (int i=0; i<n-1; i++) {
        if (arr[i+1][0] < arr[i][1]) {
            isoverlaps = 1;
            break;
        }
    }


    printf("\n");
    if(isoverlaps) printf("false");
    else printf("true");
}
