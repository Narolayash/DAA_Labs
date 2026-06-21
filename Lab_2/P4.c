// Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of 
// positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array. 

#include <stdio.h>

int main () {
    int n[] = {1, -1, -2, -3, 3, 2, -10, 56};
    int size = 8;
    int ans[8];

    int pcount = 0, ncount = 0;
    for (int i=0; i<size; i++) {
        if (n[i] >= 0) pcount++;
        else ncount++;
    }

    int positive[pcount];
    int negative[ncount];

    int i = 0, j = 0;
    for (int k=0; k<size; k++) {
        if (n[k] >= 0) positive[i++] = n[k];
        else negative[j++] = n[k];
    }

    i = 0, j = 0;
    int k = 0;
    
    while (i < pcount && j < ncount) {
        ans[k++] = positive[i++];
        ans[k++] = negative[j++];
    }

    while (i < pcount)
        ans[k++] = positive[i++];

    while (j < ncount)
        ans[k++] = negative[j++];

    for (int i = 0; i < size; i++)
        printf("%d ", ans[i]);

    return 0;
}