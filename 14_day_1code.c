#include <stdio.h>

int main() {
    int n, i, odd = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}
