#include <stdio.h>

int main(void)
{
	char text[1000];
	int character;
	int length = 0;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (length >= 999)
		{
			return 1;
		}
		text[length++] = (char)character;
	}

	for (int index = length - 1; index >= 0; index--)
	{
		putchar(text[index]);
	}
	putchar('\n');

	return 0;
}
