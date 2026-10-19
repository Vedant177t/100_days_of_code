#include <stdio.h>
#include <stdlib.h>

#define MAX_TARGET 1000005 // Adjust based on maximum possible target value

void findTwoSum(int nums[], int n, int target) {
    // Array to store indices of visited numbers. 
    // Initialized to -1 (meaning unvisited).
    int* num_to_index = (int*)malloc(MAX_TARGET * sizeof(int));
    for (int i = 0; i < MAX_TARGET; i++) {
        num_to_index[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        // Check if the complement is valid and has been seen before
        if (complement >= 0 && complement < MAX_TARGET && num_to_index[complement] != -1) {
            printf("%d %d\n", num_to_index[complement], i);
            free(num_to_index);
            return;
        }

        // Store the current number's index if it falls within our tracking limit
        if (nums[i] < MAX_TARGET) {
            num_to_index[nums[i]] = i;
        }
    }

    // If no solution is found
    printf("-1 -1\n");
    free(num_to_index);
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target integer: ");
    scanf("%d", &target);

    findTwoSum(nums, n, target);

    free(nums);
    return 0;
}
