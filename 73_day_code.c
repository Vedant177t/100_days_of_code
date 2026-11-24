#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    FILE *file;
    char filename;
    int ch;
    int characters = 0, words = 0, lines = 0;
    bool inWord = false;

    printf("Enter the filename to read (e.g., info.txt): ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open %s.\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Count lines whenever a newline character is encountered
        if (ch == '\n') {
            lines++;
        }

        // Check if the character is whitespace (space, tab, newline, etc.)
        if (isspace((unsigned char)ch)) {
            inWord = false;
        } else if (!inWord) {
            // Transitioning from whitespace into a non-space character starts a new word
            inWord = true;
            words++;
        }
    }

    // Account for the last line if the file is non-empty and doesn't end with '\n'
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("\n--- File Statistics ---\n");
    printf("Characters : %d\n", characters);
    printf("Words      : %d\n", words);
    printf("Lines      : %d\n", lines);

    return 0;
}
