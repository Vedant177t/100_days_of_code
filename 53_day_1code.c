#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    int *nums;
    long long total = 0;
    long long left_sum = 0;
    int pivot = -1;

    if (scanf("%d", &size) != 1 || size < 0)
    {
        return 1;
    }

    if (size == 0)
    {
        printf("-1\n");
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
        total += nums[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (left_sum == total - left_sum - nums[i])
        {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }

    printf("%d\n", pivot);
    free(nums);
    return 0;
}