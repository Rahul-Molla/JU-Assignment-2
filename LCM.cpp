#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, result, num;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of integers must be positive.\n");
        return 1;
    }

    printf("Enter the numbers:\n");
    scanf("%d", &result);  // Read the first number

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);  // Read the next number
        result = lcm(result, num);  // Update the LCM
    }

    printf("The LCM of the given numbers is: %d\n", result);

    return 0;
}
