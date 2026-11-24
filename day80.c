#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(void) {
    struct Student s;
    int n;

    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%49s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    while (fscanf(fp, "%49s %d %f",
                  s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}