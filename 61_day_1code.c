#include <stdio.h>
#include <stdlib.h>

void printFirstNegative(int arr[], int n, int k) {
    // Array to act as a queue to store indices of negative elements
    int *queue = (int *)malloc(n * sizeof(int));
    int front = 0;
    int rear = 0;

    // Step 1: Process the first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }

    // Print result for the first window
    if (front < rear) {
        printf("%d ", arr[queue[front]]);
    } else {
        printf("0 ");
    }

    // Step 2: Process the rest of the array elements
    for (int i = k; i < n; i++) {
        // 1. Remove element from queue if it falls out of the current window
        while (front < rear && queue[front] <= (i - k)) {
            front++;
        }

        // 2. Add current element's index if it is negative
        if (arr[i] < 0) {
            queue[rear++] = i;
        }

        // 3. The element at the front of the queue is the first negative element
        if (front < rear) {
            printf("%d ", arr[queue[front]]);
        } else {
            printf("0 ");
        }
    }
    printf("\n");

    // Clean up allocated memory
    free(queue);
}

int main() {
    int n, k;

    // Take array size input
    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = (int *)malloc(n * sizeof(int));
    
    // Take array elements input
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    // Take window size input
    printf("Enter window size (k): ");
    if (scanf("%d", &k) != 1 || k > n || k <= 0) {
        printf("Invalid window size.\n");
        free(arr);
        return 1;
    }

    printf("Result: ");
    printFirstNegative(arr, n, k);

    // Clean up allocated memory
    free(arr);
    return 0;
}
