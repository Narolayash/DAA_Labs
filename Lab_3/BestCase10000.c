// This file generates 10000 sorted numbers in ascending order and stores them in the file best10000.text

#include <stdio.h>

int main () {
    FILE *fp;
    fp = fopen("best10000.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 1;
    while (n <= 10000) {
        fprintf(fp, "%d\n", n++);
    }

    fclose(fp);

    return 0;
}
