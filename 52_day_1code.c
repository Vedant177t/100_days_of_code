#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    int x;
    int *arr;
    int left = 0;
    int right;
    int result = -1;

    if (scanf("%d", &size) != 1 || size < 0)
    {
        return 1;
    }

    if (size == 0)
    {
        if (scanf("%d", &x) != 1)
        {
            return 1;
        }
        printf("-1\n");
        return 0;
    }

    arr = malloc((size_t)size * sizeof(*arr));
    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            free(arr);
            return 1;
        }
    }

    if (scanf("%d", &x) != 1)
    {
        free(arr);
        return 1;
    }

    right = size - 1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (arr[middle] >= x)
        {
            result = middle;
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }

    printf("%d\n", result);
    free(arr);
    return 0;
}