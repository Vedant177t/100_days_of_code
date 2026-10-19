#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n) {
    int* merged = (int*)malloc((m + n) * sizeof(int));
    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and insert the smaller one
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print the merged sorted array
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d ", merged[idx]);
    }
    printf("\n");

    free(merged);
}

int main() {
    int m, n;

    printf("Enter size of first array (m): ");
    if (scanf("%d", &m) != 1 || m < 0) return 0;
    
    int* arr1 = (int*)malloc(m * sizeof(int));
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array (n): ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    int* arr2 = (int*)malloc(n * sizeof(int));
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Merged array: ");
    mergeSortedArrays(arr1, m, arr2, n);

    free(arr1);
    free(arr2);
    return 0;
}
