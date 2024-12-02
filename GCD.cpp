#include <stdio.h>

// Function to compute GCD using the Euclidean algorithm
int gcd_euclid(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute GCD using the factorization method
int gcd_factorization(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    printf("GCD using Euclidean Algorithm: %d\n", gcd_euclid(num1, num2));
    printf("GCD using Factorization Method: %d\n", gcd_factorization(num1, num2));

    return 0;
}
