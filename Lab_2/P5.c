// Given an array arr[], the task is to generate all the possible subarrays of the given array. 

// Examples:  

// Input: arr[] = [1, 2, 3] 
// Output: [ [1], [1, 2], [2], [1, 2, 3], [2, 3], [3] ] 

// Input: arr[] = [1, 2] 
// Output: [ [1], [1, 2], [2] ]

#include <stdio.h>

int main () {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arry[n];
    printf("--- enter elements --- \n");
    for (int i=0; i<n; i++) {
        printf("element %d: ", i);
        scanf("%d", &arry[i]);
    }

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            
            for (int k=i; k<=j; k++) {
                printf("%d ", arry[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
