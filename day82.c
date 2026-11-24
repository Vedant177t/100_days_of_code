#include <stdio.h>

enum Traffic {
    RED, YELLOW, GREEN
};

int main() {
    enum Traffic light = RED;

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}