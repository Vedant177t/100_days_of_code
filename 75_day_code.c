include <stdio.h>

int main() {
    FILE *file;
    char filename;
    char newLine;

    // Get the filename from the user
    printf("Enter the filename to append to (e.g., info.txt): ");
    scanf("%99s", filename);

    // Clear the leftover newline character from the input buffer before calling fgets()
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Open the file in append mode ("a")
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open '%s'.\n", filename);
        return 1;
    }

    // Take the new line of text from the user
    printf("Enter the line of text to append: ");
    if (fgets(newLine, sizeof(newLine), stdin) != NULL) {
        // Write the line to the end of the file
        fputs(newLine, file);
        printf("Text successfully appended to '%s'.\n", filename);
    }

    // Close the file
    fclose(file);

    return 0;
}
