#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int character;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (islower((unsigned char)character))
		{
			character = toupper((unsigned char)character);
		}
		else if (isupper((unsigned char)character))
		{
			character = tolower((unsigned char)character);
		}

		putchar(character);
	}

	putchar('\n');
	return 0;
}
