// This file generates 100000 sorted numbers in ascending order and stores them in the file best100000.text

#include <stdio.h>

int main () {
    FILE *fp;
    fp = fopen("best100000.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 1;
    while (n <= 100000) {
        fprintf(fp, "%d\n", n++);
    }

    fclose(fp);

    return 0;
}
