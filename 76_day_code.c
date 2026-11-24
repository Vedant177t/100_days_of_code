#include <stdio.h>

int main() {
    FILE *file;
    char filename;
    char buffer;

    // Ask the user for a filename
    printf("Enter the filename to open: ");
    scanf("%99s", filename);

    // Attempt to open the file in read mode ("r")
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error: The file '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // Read and display the file's content line by line
    printf("\n--- Contents of '%s' ---\n", filename);
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}
