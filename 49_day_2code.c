#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[1000];
	const char *delimiters = " \t\r\n";
	char *surname;
	char *next_word;
	int has_initials = 0;

	if (fgets(name, sizeof(name), stdin) == NULL)
	{
		return 1;
	}

	surname = strtok(name, delimiters);
	if (surname == NULL)
	{
		putchar('\n');
		return 0;
	}

	while ((next_word = strtok(NULL, delimiters)) != NULL)
	{
		printf("%c.", toupper((unsigned char)surname[0]));
		surname = next_word;
		has_initials = 1;
	}

	if (has_initials)
	{
		putchar(' ');
	}
	printf("%s\n", surname);
	return 0;
}
