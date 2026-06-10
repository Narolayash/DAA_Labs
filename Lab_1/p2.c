// Write a program to calculate the sum of numbers from 1 to n using recursion.

#include <stdio.h>

// recursion
// int sumOfN(int n) {
//     if (n == 1) return 1;

//     return n + sumOfN(n - 1);
// }


// without recursion
int sumOfN(int n) {
    int ans = 0;

    for (int i=1; i<=n; i++) {
        ans += i;
    }

    return ans;
}

int main() {
    printf("Sum of 1 to 5: %d", sumOfN(5));

    return 0;
}
