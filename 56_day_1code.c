#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;

    if (scanf("%d", &n) != 1 || n < 0)
    {
        return 1;
    }

    if (n == 0)
    {
        putchar('\n');
        return 0;
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

    for (int i = 0; i < n; i++)
    {
        int next_greater = -1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next_greater = arr[j];
                break;
            }
        }

        if (i > 0)
        {
            printf(", ");
        }
        printf("%d", next_greater);
    }

    putchar('\n');
    free(arr);
    return 0;
}