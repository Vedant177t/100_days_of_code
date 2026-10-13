#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000];
    size_t length;
    int first = 1;

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }

    length = strcspn(str, "\r\n");
    str[length] = '\0';

    for (size_t start = 0; start < length; start++)
    {
        for (size_t end = start; end < length; end++)
        {
            if (!first)
            {
                printf(",");
            }

            for (size_t i = start; i <= end; i++)
            {
                putchar(str[i]);
            }

            first = 0;
        }
    }

    putchar('\n');
    return 0;
}