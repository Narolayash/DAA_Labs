// This file generates 1000 sorted numbers in ascending order and stores them in the file best1000.text

#include <stdio.h>

int main () {
    FILE *fp;
    fp = fopen("best1000.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 1;
    while (n <= 1000) {
        fprintf(fp, "%d\n", n++);
    }

    fclose(fp);

    return 0;
}
