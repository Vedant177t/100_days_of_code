#include <stdio.h>

int main() {
    FILE *file;
    char buffer;

    // Open info.txt in read mode ("r")
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open info.txt. Make sure the file exists.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    printf("---------------------\n");

    // Read each line using fgets() until it returns NULL (EOF or read error)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}
