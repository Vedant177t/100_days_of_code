#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int character;
	int at_word_start = 1;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (isspace((unsigned char)character))
		{
			at_word_start = 1;
		}
		else if (at_word_start)
		{
			printf("%c.", toupper((unsigned char)character));
			at_word_start = 0;
		}
	}

	putchar('\n');
	return 0;
}
