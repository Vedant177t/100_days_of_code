#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int character;
	int spaces = 0;
	int digits = 0;
	int special = 0;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (character == ' ')
		{
			spaces++;
		}
		else if (isdigit((unsigned char)character))
		{
			digits++;
		}
		else if (!isalpha((unsigned char)character))
		{
			special++;
		}
	}

	printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
	return 0;
}
