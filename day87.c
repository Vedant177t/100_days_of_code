#include <stdio.h>

enum Role {
    ADMIN, USER, GUEST
};

int main() {
    enum Role role = USER;

    switch (role) {
        case ADMIN:
            printf("Admin: Full access\n");
            break;
        case USER:
            printf("User: Standard access\n");
            break;
        case GUEST:
            printf("Guest: Limited access\n");
            break;
    }

    return 0;
}