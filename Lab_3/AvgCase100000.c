// This file generates 100000 random numbers and stores them in the avg100000.txt file. 

#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fp;
    fp = fopen("avg100000.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 1;
    while (n <= 100000) {
        fprintf(fp, "%d\n", rand() % 100000);
        n++;
    }

    return 0;
}
