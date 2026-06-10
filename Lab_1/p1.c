// Write a recursive program for calculation of factorial of an integer

#include <stdio.h>

// recursion
// int factorial(int n) {
//     if (n == 1) return 1;

//     return n * factorial(n - 1);
// }


// without recursion
int factorial(int n) {
    int ans = 1;

    for (int i=n; i>=1; i--) {
        ans *= i;
    }

    return ans;
}

int main() {
    printf("factorial: %d", factorial(5));

    return 0;
}
