#include <stdio.h>

enum Colors {
    RED = 5,
    GREEN = 10,
    BLUE = 15
};

int main() {
    enum Colors c;

    for (c = RED; c <= BLUE; c += 5) {
        printf("%d\n", c);
    }

    return 0;
}