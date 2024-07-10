#include <stdio.h>

int main() {
    int i, j, isPrime;
    printf("Prime numbers up to 5 are:\n");

    for (i = 2; i <= 5; i++) {
        isPrime = 1;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d\n", i);
    }
    return 0;
}
