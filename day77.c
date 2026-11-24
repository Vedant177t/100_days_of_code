#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;

    FILE *src = fopen("input.txt", "r");

    if (src == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    FILE *dest = fopen("output.txt", "w");

    if (dest == NULL) {
        fclose(src);
        printf("Error opening output file!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(toupper((unsigned char)ch), dest);

    fclose(src);
    fclose(dest);

    printf("Conversion completed successfully.\n");
    return 0;
}