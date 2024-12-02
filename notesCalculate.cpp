#include <stdio.h>

int main() {
    int amount;
    int hundreds, fifties, twenties, tens;

    printf("Enter the amount to be paid: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive value.\n");
        return 1;
    }

    hundreds = amount / 100;    // Count Rs. 100 notes
    amount %= 100;             // Remaining amount

    fifties = amount / 50;     // Count Rs. 50 notes
    amount %= 50;              // Remaining amount

    twenties = amount / 20;    // Count Rs. 20 notes
    amount %= 20;              // Remaining amount

    tens = amount / 10;        // Count Rs. 10 notes
    amount %= 10;              // Remaining amount

    printf("Minimum notes required:\n");
    printf("Rs. 100: %d\n", hundreds);
    printf("Rs.  50: %d\n", fifties);
    printf("Rs.  20: %d\n", twenties);
    printf("Rs.  10: %d\n", tens);

    if (amount > 0) {
        printf("Remaining amount that cannot be paid: Rs. %d\n", amount);
    }

    return 0;
}
