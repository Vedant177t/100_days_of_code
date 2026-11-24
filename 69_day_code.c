#include <stdio.h>
#include <stdbool.h>

// Adjust OFFSET and MAX_SIZE based on the expected range of input integers
#define OFFSET 100000
#define MAX_SIZE 200001

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Boolean array initialized to false to track seen numbers
    bool seen[MAX_SIZE] = {false};

    // Single iteration to find the duplicate
    for (int i = 0; i < n; i++) {
        int index = arr[i] + OFFSET;
        
        if (seen[index]) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        seen[index] = true;
    }

    printf("No repeated element found.\n");
    return 0;
}
