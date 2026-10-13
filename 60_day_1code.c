#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int k;
    int *arr;

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

    for (int start = 0; start <= n - k; start++)
    {
        int maximum = arr[start];

        for (int i = start + 1; i < start + k; i++)
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }

        if (start > 0)
        {
            putchar(' ');
        }
        printf("%d", maximum);
    }

    putchar('\n');
    free(arr);
    return 0;
}