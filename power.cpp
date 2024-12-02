#include <stdio.h>

// Function to calculate the power without using pow() function
long long int power(int base, int exponent) {
    long long int result = 1;

    // Handle negative exponent
    if (exponent < 0) {
        printf("Negative exponents are not supported in this program.\n");
        return -1; // Indicating an error
    }

    // Multiply the base for exponent times
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;
    
    // Get input from the user
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Call the function to compute power
    long long int result = power(base, exponent);
    
    // Display the result
    if (result != -1) {
        printf("%d raised to the power of %d is: %lld\n", base, exponent, result);
    }

    return 0;
}
