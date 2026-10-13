#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *nums;
    int *answer;
    int prefix = 1;
    int suffix = 1;

    if (scanf("%d", &n) != 1 || n < 0)
    {
        return 1;
    }

    if (n == 0)
    {
        printf("[]\n");
        return 0;
    }

    nums = malloc((size_t)n * sizeof(*nums));
    answer = malloc((size_t)n * sizeof(*answer));
    if (nums == NULL || answer == NULL)
    {
        free(nums);
        free(answer);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &nums[i]) != 1)
        {
            free(nums);
            free(answer);
            return 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            printf(",");
        }
        printf("%d", answer[i]);
    }
    printf("]\n");

    free(nums);
    free(answer);
    return 0;
}