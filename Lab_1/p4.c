// Write a program to calculate the power of any number using recursion.

#include <stdio.h>

// recursion
// int powerOfNum(int n, int p) {
//     if (p == 1) return n;

//     return n * powerOfNum(n, p - 1);
// }


// without recursion
int powerOfNum(int n, int p) {
    int ans = 1;

    for (int i=p; i>=1; i--) {
        ans *= n;
    }

    return ans;
}

int main() {
    printf("ans = %d\n", powerOfNum(5, 2));
    printf("ans = %d", powerOfNum(2, 5));
    return 0;
}
