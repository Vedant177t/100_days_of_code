#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    int num, count = 0;
    long long sum = 0;

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No numbers found.\n");
    } else {
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", (double)sum / count);
    }

    fclose(fp);
    return 0;
}