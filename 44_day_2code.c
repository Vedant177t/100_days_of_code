#include <stdio.h>

int main(void)
{
	int character;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		putchar(character == ' ' ? '-' : character);
	}
	putchar('\n');

	return 0;
}
