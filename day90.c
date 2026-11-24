#include <stdio.h>

enum Gender {
    MALE, FEMALE, OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", MALE};

    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
    }

    return 0;
}