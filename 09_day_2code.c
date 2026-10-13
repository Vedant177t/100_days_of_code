// ...existing code...

#include <stdio.h>

int main() {
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage <= 79) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage <= 69) {
        printf("Grade D\n");
    } else if (percentage >= 0 && percentage < 60) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    }

    return 0;
}