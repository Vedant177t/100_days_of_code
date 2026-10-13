#include <stdio.h>

int main(void)
{
	int seen[26] = {0};
	int character;
	int first_repeating = -1;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (character >= 'a' && character <= 'z')
		{
			int index = character - 'a';

			if (seen[index])
			{
				first_repeating = character;
				break;
			}

			seen[index] = 1;
		}
	}

	if (first_repeating == -1)
	{
		printf("-1\n");
	}
	else
	{
		printf("%c\n", first_repeating);
	}

	return 0;
}
