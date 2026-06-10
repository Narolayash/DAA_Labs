// Write a program to count the digits of a given number using recursion.

#include <stdio.h>

// recursion
// int countDigit(int n) {
//     if (n == 0) return 0;

//     return 1 + sumOfDigit(n / 10);
// }


// without recursion
int countDigit(int n) {
    int digit = 0;

    while (n != 0) {
        digit++;
        n /= 10;
    }

    return digit;
}

int main() {
    printf("ans = %d\n", countDigit(123));
    printf("ans = %d", countDigit(13));

    return 0;
}
