#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *nums;
    int candidate = 0;
    int votes = 0;
    int count = 0;

    if (scanf("%d", &n) != 1 || n < 0)
    {
        return 1;
    }

    if (n == 0)
    {
        printf("-1\n");
        return 0;
    }

    nums = malloc((size_t)n * sizeof(*nums));
    if (nums == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &nums[i]) != 1)
        {
            free(nums);
            return 1;
        }

        if (votes == 0)
        {
            candidate = nums[i];
            votes = 1;
        }
        else if (nums[i] == candidate)
        {
            votes++;
        }
        else
        {
            votes--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    printf("%d\n", count > n / 2 ? candidate : -1);
    free(nums);
    return 0;
}