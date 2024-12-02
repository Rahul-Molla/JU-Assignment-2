#include <stdio.h>

void findRoomNumber(int n) {
    int total_sum = n * (n + 1) / 2; // Total sum of all room numbers
    int left_sum = 0;  // Initialize left sum

    for (int x = 1; x <= n; x++) {
        int right_sum = total_sum - left_sum - x;  // Right sum = total_sum - left_sum - current room number
        
        if (left_sum == right_sum) {
            printf("The room number X is: %d\n", x);
            return;
        }
        
        left_sum += x;  // Update left_sum for next iteration
    }

    printf("No such room number X exists.\n");
}

int main() {
    int n;
    printf("Enter the total number of rooms (n): ");
    scanf("%d", &n);

    findRoomNumber(n);  // Call function to find room number
    return 0;
}
