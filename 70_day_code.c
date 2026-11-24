#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    // fgets safely reads a full line including spaces
    if (fgets(str, sizeof(str), stdin) != NULL) {
        bool capitalizeNext = true;

        for (int i = 0; str[i] != '\0'; i++) {
            if (isalpha((unsigned char)str[i])) {
                if (capitalizeNext) {
                    str[i] = toupper((unsigned char)str[i]);
                    capitalizeNext = false;
                } else {
                    str[i] = tolower((unsigned char)str[i]);
                }
            } 
            // Reset flag when encountering sentence-ending punctuation
            else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
                capitalizeNext = true;
            }
        }

        printf("Sentence case: %s", str);
    }

    return 0;
}
