#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function similar to Quicksort
int partition(int arr[], int left, int right) {
    int pivot = arr[right]; // Choosing the last element as pivot
    int i = left;
    
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[right]);
    return i;
}

// Quickselect function to find the kth smallest element
int quickSelect(int arr[], int left, int right, int k) {
    // If k is smaller than number of elements in array
    if (k > 0 && k <= right - left + 1) {
        
        // Partition the array around a pivot
        int pivotIndex = partition(arr, left, right);
        
        // If partition position is same as k
        if (pivotIndex - left == k - 1) {
            return arr[pivotIndex];
        }
        
        // If partition position is more, recur for left subarray
        if (pivotIndex - left > k - 1) {
            return quickSelect(arr, left, pivotIndex - 1, k);
        }
        
        // Else recur for right subarray
        return quickSelect(arr, pivotIndex + 1, right, k - (pivotIndex - left + 1));
    }
    
    return -1; // Return -1 if k is out of bounds
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 4, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    int result = quickSelect(arr, 0, n - 1, k);
    
    if (result != -1) {
        printf("The %dth smallest element is: %d\n", k, result);
    } else {
        printf("Invalid value of k.\n");
    }
    
    return 0;
}
