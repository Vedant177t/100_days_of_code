#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    int top = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];
}

int main() {
    struct Student s[5] = {
        {"Aman", 1, 85.0},
        {"Riya", 2, 91.0},
        {"Rahul", 3, 78.0},
        {"Neha", 4, 88.0},
        {"Karan", 5, 95.0}
    };

    struct Student top = findTop(s, 5);

    printf("Top Student\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}