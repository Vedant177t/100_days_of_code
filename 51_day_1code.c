#include <stdio.h>
#include <stdlib.h>

static int find_first(const int nums[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target)
        {
            result = middle;
            right = middle - 1;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return result;
}

static int find_last(const int nums[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target)
        {
            result = middle;
            left = middle + 1;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return result;
}

int main(void)
{
    int size;
    int target;
    int *nums;

    if (scanf("%d", &size) != 1 || size < 0)
    {
        return 1;
    }

    if (size == 0)
    {
        if (scanf("%d", &target) != 1)
        {
            return 1;
        }
        printf("-1,-1\n");
        return 0;
    }

    nums = malloc((size_t)size * sizeof(*nums));
    if (nums == NULL)
    {
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &nums[i]) != 1)
        {
            free(nums);
            return 1;
        }
    }

    if (scanf("%d", &target) != 1)
    {
        free(nums);
        return 1;
    }

    printf("%d,%d\n", find_first(nums, size, target), find_last(nums, size, target));
    free(nums);
    return 0;
}