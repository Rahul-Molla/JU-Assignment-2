#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, p;
    double M[10][10], R[10];

    // Input the size of the matrix (n) and the power (p)
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);
    printf("Enter the power (p): ");
    scanf("%d", &p);

    // Initialize the random number generator
    srand(time(NULL));

    // Generate the matrix M such that each row sums to 1
    for (int i = 0; i < n; i++) {
        double rowSum = 0.0;
        for (int j = 0; j < n; j++) {
            M[i][j] = rand() % 10 + 1;  // Random values between 1 and 10
            rowSum += M[i][j];
        }
        for (int j = 0; j < n; j++) {
            M[i][j] /= rowSum;  // Normalize the row
        }
    }

    // Initialize vector R with 1/n
    for (int i = 0; i < n; i++) {
        R[i] = 1.0 / n;
    }

    // Apply the matrix multiplication p times
    for (int step = 0; step < p; step++) {
        double tempR[10] = {0};  // Temporary array for intermediate values
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                tempR[i] += M[i][j] * R[j];  // Multiply row of M by vector R
            }
        }
        for (int i = 0; i < n; i++) {
            R[i] = tempR[i];  // Update R
        }
    }

    // Print the resulting vector R
    printf("\nResultant vector R after M^p * R:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f\n", R[i]);
    }

    return 0;
}