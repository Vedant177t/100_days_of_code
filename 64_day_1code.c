#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int lengthOfLongestSubstring(char *s) {
    // Array to store the last seen index of all 256 ASCII characters.
    // Initialized to -1 to indicate the character hasn't been seen yet.
    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    int max_length = 0;
    int start = 0;
    int len = strlen(s);

    for (int end = 0; end < len; end++) {
        unsigned char current_char = s[end];

        // If the character was seen before and is inside the current window
        if (last_seen[current_char] >= start) {
            // Shrink the window by moving start past the duplicate character
            start = last_seen[current_char] + 1;
        }

        // Update the last seen index of the character
        last_seen[current_char] = end;

        // Calculate current window size and update max_length
        max_length = MAX(max_length, end - start + 1);
    }

    return max_length;
}

int main() {
    char s[100000]; // Array size allocation for large input strings

    printf("Enter a string: ");
    // Reads the entire line including spaces, up to the newline character
    if (fgets(s, sizeof(s), stdin)) {
        // Strip the trailing newline character added by fgets if present
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }

        int result = lengthOfLongestSubstring(s);
        printf("%d\n", result);
    }

    return 0;
}
