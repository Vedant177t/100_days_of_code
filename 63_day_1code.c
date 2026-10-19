#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partitions the array around a pivot element.
// Elements smaller than pivot go to the left, larger to the right.
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

// Finds the kth smallest element using Quickselect logic.
int quickselect(int arr[], int low, int high, int k) {
    // If k is valid for the current subarray limits
    if (k > 0 && k <= high - low + 1) {
        
        // Partition the array and get the pivot index
        int pivot_index = partition(arr, low, high);

        // If pivot position matches the kth position
        if (pivot_index - low == k - 1) {
            return arr[pivot_index];
        }

        // If pivot position is greater, search the left subarray
        if (pivot_index - low > k - 1) {
            return quickselect(arr, low, pivot_index - 1, k);
        }

        // Else search the right subarray
        return quickselect(arr, pivot_index + 1, high, k - (pivot_index - low + 1));
    }
    
    return -1; // Return -1 if k is out of bounds
}

int main() {
    // Example Input
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int k = 3; // We want to find the 3rd smallest element
    int n = sizeof(arr) / sizeof(arr[0]);

    // Error checking for invalid 'k'
    if (k > n || k <= 0) {
        printf("Invalid value of k.\n");
    } else {
        int result = quickselect(arr, 0, n - 1, k);
        printf("The %d-th smallest element is: %d\n", k, result);
    }

    return 0;
}
