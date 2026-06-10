//  Given a number n, write an efficient function to print all prime factors of n. For example, if the input number is 12, then output should be "2 2
// 3". And if the input number is 315, then output should be "3 3 5 7".


#include <stdio.h>

int primeFactor(int num) {

    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }

    for (int i=3; i * i <= num; i+=2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 2) printf("%d ", num);
}

int main() {
    primeFactor(12);
    printf("\n");
    primeFactor(315);
    return 0;
}

// void primeFactor(int num) {
//     int primeNumber[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

//     for (int i=0; i<10; i++) {
//         while (num % primeNumber[i] == 0) {
//             printf("%d ", primeNumber[i]);
//             num /= primeNumber[i];
//         }
//     }
// }

// int main() {
//     primeFactor(12);
//     printf("\n");
//     primeFactor(315);

//     return 0;
// }
