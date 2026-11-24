#include <stdio.h>

enum Months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST, SEPTEMBER,
    OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("Month %d has %d days\n", i, days[i - 1]);
    }

    return 0;
}