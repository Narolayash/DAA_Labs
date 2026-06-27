// This file generates 1000 random numbers and stores them in the avg1000.txt file. 

#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fp;
    fp = fopen("avg1000.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 1;
    while (n <= 1000) {
        fprintf(fp, "%d\n", rand() % 1000);
        n++;
    }

    return 0;
}
