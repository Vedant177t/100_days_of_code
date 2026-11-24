#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joining_date.day,
          &e.joining_date.month,
          &e.joining_date.year);

    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}