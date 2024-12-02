#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;  // Numbers <= 1 are not prime
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to the square root of num
        if (num % i == 0) return 0;  // Not a prime number
    }
    return 1;  // Prime number
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
