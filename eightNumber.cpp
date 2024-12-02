#include <stdio.h>

// Function to print digits in words
void printDigit(int digit) {
    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

// Function to process and print number in the Indian number system
void indianNumberSystem(int num) {
    printf("\nIndian Number System: ");
    if (num / 10000000 > 0) {
        printDigit(num / 10000000);
        printf("Crore ");
        num %= 10000000;
    }
    if (num / 100000 > 0) {
        printDigit(num / 100000);
        printf("Lakh ");
        num %= 100000;
    }
    if (num / 1000 > 0) {
        printDigit(num / 1000);
        printf("Thousand ");
        num %= 1000;
    }
    if (num / 100 > 0) {
        printDigit(num / 100);
        printf("Hundred ");
        num %= 100;
    }
    if (num > 0) {
        if (num > 0) printf("and ");
        if (num / 10 > 1) {
            switch (num / 10) {
                case 2: printf("Twenty "); break;
                case 3: printf("Thirty "); break;
                case 4: printf("Forty "); break;
                case 5: printf("Fifty "); break;
                case 6: printf("Sixty "); break;
                case 7: printf("Seventy "); break;
                case 8: printf("Eighty "); break;
                case 9: printf("Ninety "); break;
            }
            num %= 10;
        }
        if (num > 0) {
            printDigit(num);
        }
    }
    printf("\n");
}

// Function to process and print number in the International number system
void internationalNumberSystem(int num) {
    printf("\nInternational Number System: ");
    if (num / 1000000 > 0) {
        printDigit(num / 1000000);
        printf("Million ");
        num %= 1000000;
    }
    if (num / 1000 > 0) {
        printDigit(num / 1000);
        printf("Thousand ");
        num %= 1000;
    }
    if (num / 100 > 0) {
        printDigit(num / 100);
        printf("Hundred ");
        num %= 100;
    }
    if (num > 0) {
        if (num > 0) printf("and ");
        if (num / 10 > 1) {
            switch (num / 10) {
                case 2: printf("Twenty "); break;
                case 3: printf("Thirty "); break;
                case 4: printf("Forty "); break;
                case 5: printf("Fifty "); break;
                case 6: printf("Sixty "); break;
                case 7: printf("Seventy "); break;
                case 8: printf("Eighty "); break;
                case 9: printf("Ninety "); break;
            }
            num %= 10;
        }
        if (num > 0) {
            printDigit(num);
        }
    }
    printf("\n");
}

// Main function
int main() {
    int num;

    printf("Enter an 8-digit number: ");
    scanf("%d", &num);

    if (num < 10000000 || num > 99999999) {
        printf("Please enter a valid 8-digit number.\n");
        return 1;
    }

    indianNumberSystem(num);
    internationalNumberSystem(num);

    return 0;
}
