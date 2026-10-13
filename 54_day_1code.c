#include <stdio.h>

int main(void)
{
    long long n;
    long long left = 1;
    long long right;
    long long pivot = -1;

    if (scanf("%lld", &n) != 1 || n <= 0)
    {
        return 1;
    }

    right = n;
    while (left <= right)
    {
        long long x = left + (right - left) / 2;
        long long sum_to_x = x * (x + 1) / 2;
        long long sum_from_x = (x + n) * (n - x + 1) / 2;

        if (sum_to_x == sum_from_x)
        {
            pivot = x;
            break;
        }
        else if (sum_to_x < sum_from_x)
        {
            left = x + 1;
        }
        else
        {
            right = x - 1;
        }
    }

    printf("%lld\n", pivot);
    return 0;
}