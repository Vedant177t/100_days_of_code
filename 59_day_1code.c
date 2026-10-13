#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int k;
    int *arr;
    long long window_sum = 0;
    long long max_sum;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            free(arr);
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k <= 0 || k > n)
    {
        free(arr);
        return 1;
    }

    for (int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for (int i = k; i < n; i++)
    {
        window_sum += (long long)arr[i] - arr[i - k];
        if (window_sum > max_sum)
        {
            max_sum = window_sum;
        }
    }

    printf("%lld\n", max_sum);
    free(arr);
    return 0;
}