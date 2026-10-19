#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 100005

const char* checkAnagram(const char* s, const char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    // Anagrams must have the identical length
    if (len_s != len_t) {
        return "Not Anagram";
    }

    int count[26] = {0};

    // Count character frequencies from string s
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
    }

    // Match frequencies using string t
    for (int i = 0; i < len_t; i++) {
        int index = t[i] - 'a';
        if (count[index] == 0) {
            return "Not Anagram";
        }
        count[index]--;
    }

    return "Anagram";
}

int main() {
    char s[MAX_LIMIT];
    char t[MAX_LIMIT];

    printf("Enter string s: ");
    // Read input until newline character to handle strings up to MAX_LIMIT
    scanf("%100004s", s);

    printf("Enter string t: ");
    scanf("%100004s", t);

    printf("%s\n", checkAnagram(s, t));

    return 0;
}
