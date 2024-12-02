#include <stdio.h>

void unionOfSortedLists(int list1[], int size1, int list2[], int size2) {
    int result[size1 + size2];  // Resultant array
    int i = 0, j = 0, k = 0;    // Pointers for list1, list2, and result

    // Traverse both lists
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            if (k == 0 || result[k - 1] != list1[i]) {
                result[k++] = list1[i];
            }
            i++;
        } else if (list1[i] > list2[j]) {
            if (k == 0 || result[k - 1] != list2[j]) {
                result[k++] = list2[j];
            }
            j++;
        } else {
            if (k == 0 || result[k - 1] != list1[i]) {
                result[k++] = list1[i];
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from list1
    while (i < size1) {
        if (k == 0 || result[k - 1] != list1[i]) {
            result[k++] = list1[i];
        }
        i++;
    }

    // Add remaining elements from list2
    while (j < size2) {
        if (k == 0 || result[k - 1] != list2[j]) {
            result[k++] = list2[j];
        }
        j++;
    }

    // Print the union of the two lists
    printf("Union of the two sorted lists: ");
    for (int m = 0; m < k; m++) {
        printf("%d ", result[m]);
    }
    printf("\n");
}

int main() {
    int list1[] = {1, 2, 4, 5, 6};
    int list2[] = {2, 3, 5, 7};
    
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);

    unionOfSortedLists(list1, size1, list2, size2);

    return 0;
}
