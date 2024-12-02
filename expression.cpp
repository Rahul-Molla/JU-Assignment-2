#include <stdio.h>

// Function to compute factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// A. Series 1/1! + 2/2! + 3/3! + ... up to 10 terms
void seriesA() {
    double sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += (double)i / factorial(i);
    }
    printf("Sum of the series: %.6f\n", sum);
}

// B. Sine(x) using Taylor series
double sine(double x) {
    double result = 0;
    int sign = 1;
    for (int n = 0; n < 10; n++) {
        double term = 1;
        for (int i = 1; i <= (2 * n + 1); i++) {
            term *= x / i;
        }
        result += sign * term;
        sign = -sign;  // Alternate the signs
    }
    return result;
}

// C. Cosine(x) using Taylor series
double cosine(double x) {
    double result = 1;
    int sign = -1;
    for (int n = 1; n < 10; n++) {
        double term = 1;
        for (int i = 1; i <= (2 * n); i++) {
            term *= x / i;
        }
        result += sign * term;
        sign = -sign;  // Alternate the signs
    }
    return result;
}

// D. Log(1+x) using Taylor series
double log_series(double x) {
    if (x <= -1) {
        printf("Error: x should be greater than -1 for log(1+x)\n");
        return -1;
    }

    double result = 0;
    for (int n = 1; n < 10; n++) {
        result += (n % 2 == 0 ? -1 : 1) * (x / n);  // Add or subtract terms
    }
    return result;
}

int main() {
    // A. Series 1/1! + 2/2! + 3/3! + ... up to 10 terms
    seriesA();

    // B. Sine(x)
    double x;
    printf("Enter x for sine(x): ");
    scanf("%lf", &x);
    printf("Sine(x) = %.6f\n", sine(x));

    // C. Cosine(x)
    printf("Enter x for cosine(x): ");
    scanf("%lf", &x);
    printf("Cosine(x) = %.6f\n", cosine(x));

    // D. Log(1+x)
    printf("Enter x for log(1+x): ");
    scanf("%lf", &x);
    printf("Log(1+x) = %.6f\n", log_series(x));

    return 0;
}
