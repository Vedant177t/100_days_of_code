#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char name[100];
    int age;

    // Open info.txt in write mode ("w")
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create or open info.txt.\n");
        return 1;
    }

    // Take user's name (supports full names with spaces)
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove the trailing newline character added by fgets
        name[strcspn(name, "\n")] = '\0';
    }

    // Take user's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write the data to info.txt using fprintf()
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file to ensure all data is saved
    fclose(file);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}
