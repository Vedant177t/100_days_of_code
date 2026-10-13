#include <stdio.h>

int main(void)
{
	int character;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (character >= 'a' && character <= 'z')
		{
			character -= 'a' - 'A';
		}
		putchar(character);
	}

	putchar('\n');
	return 0;
}
