#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int character;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		int lowercase = tolower((unsigned char)character);

		if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' ||
			lowercase == 'o' || lowercase == 'u')
		{
			continue;
		}

		putchar(character);
	}

	putchar('\n');
	return 0;
}
