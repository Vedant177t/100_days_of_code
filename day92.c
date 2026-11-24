#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%49s %d %f",
              s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nAll Student Details\n");

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.2f\n",
               s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}