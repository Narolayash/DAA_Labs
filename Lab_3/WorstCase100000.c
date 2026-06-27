// This file generates 100000 sorted numbers in descending order and stores them in the file worst100000.text

#include <stdio.h>

int main () {
    FILE *fp;
    fp = fopen("worst100000.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    int n = 100000;
    while (n >= 1) {
        fprintf(fp, "%d\n", n--);
    }

    fclose(fp);

    return 0;
}
