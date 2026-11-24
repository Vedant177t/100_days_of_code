#include <stdio.h>

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        switch (s) {
            case SUCCESS:
                printf("Operation successful\n");
                break;
            case FAILURE:
                printf("Operation failed\n");
                break;
            case TIMEOUT:
                printf("Operation timed out\n");
                break;
        }
    }

    return 0;
}