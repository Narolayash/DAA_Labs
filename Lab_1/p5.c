// Write a program to print Fibonacci series for n number using recursion.

#include <stdio.h>

// recursion
// int fibonacci(int n) {
//     if (n == 0 || n == 1) return n;

//     return fibonacci(n - 1) + fibonacci(n - 2);
// }


// without recursion
void fibonacci(int n) {
    int first = 0, second = 1;

    printf("%d ", first);
    printf("%d ", second);

    for (int i=2; i<=n; i++) {
        int third = first + second;
        printf("%d ", third);
        first = second;
        second = third;
    }
}

int main() {
    // recursion
    // for (int i=0; i<7; i++) {
    //     printf("%d ", fibonacci(i));
    // }

    fibonacci(5);

    return 0;
}
