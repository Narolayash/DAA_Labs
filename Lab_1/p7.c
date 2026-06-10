// Given two integers n and m (m! = 0). Find the number closest to n and divisible by m. If there is more than one such number, then output the
// one having maximum absolute value.

#include <stdio.h>

int finalAns(int n, int a, int b) {
    if (n - a == b - n) return b;

    if (n - a > b - n) return b;
    else return a;
}

int closestNumber(int n, int m) {
    int quotient = n / m;

    if (n > 0) return finalAns(n, quotient * m, (quotient + 1) * m);
    else return -finalAns(-n, -quotient * m, -(quotient-1) * m);
}

int main() {
    printf("%d ", closestNumber(13, 4));
    printf("%d ", closestNumber(-15, 6));

    return 0;
}



// int abs(int n) {
//     if (n >= 0) return n;
//     return -n;
// }

// int closestNumber(int n, int m) {
//     for (int i=0; i<=m; i++) {
//         int lower = n - i;
//         int upper = n + i;

//         int l = lower % m == 0 ? 1 : 0;
//         int u = upper % m == 0 ? 1 : 0;

//         if (l && u) {
//             return abs(lower) > abs(upper) ? lower : upper;
//         }

//         if (l) return lower;
//         if (u) return upper;
//     }

//     return -1;
// }

// int main() {
//     printf("%d ", closestNumber(13, 4));
//     printf("%d ", closestNumber(-15, 6));
// }
