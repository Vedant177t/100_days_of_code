#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    int ch;

    // Get source and destination filenames
    printf("Enter the source filename: ");
    scanf("%99s", sourceName);

    printf("Enter the destination filename: ");
    scanf("%99s", destName);

    // Open source file in read mode ("r")
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourceName);
        return 1;
    }

    // Open destination file in write mode ("w")
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Could not create or open destination file '%s'.\n", destName);
        fclose(sourceFile); // Close the already opened source file before exiting
        return 1;
    }

    // Read each character from source and write it to destination until EOF
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceName, destName);

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
