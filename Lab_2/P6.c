// Given a positive integer n, find whether it can be represented as the sum of two or more consecutive positive integers. 

// Examples: 
// Input: n = 10; Output: true 
// Explanation: 10 can be expressed as: 1 + 2 + 3 + 4 = 10. 

// Input: n = 8; Output: false 
// Explanation: 8 cannot be expressed as the sum of two or more consecutive positive integers. 

// Input: n = 24; Output: true 
// Explanation: 24 can be expressed as: 7 + 8 + 9 = 24. 

#include <stdio.h>
#include <stdbool.h>

bool consecutiveInt(int n) {
    int start = 0;
    int end = 0;
    int sum = 0;

    while (end <= n/2) {
        if (sum < n) {
            end++;
            sum += end;
        }
        else {
            start++;
            sum -= start;
        }
        if (sum == n) return true;
    }

    return false;
}

int main() {
    int n = 2;
    printf("%d ", consecutiveInt(n));
    return 0;
}

