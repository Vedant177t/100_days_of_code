#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int character;
	int vowels = 0;
	int consonants = 0;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (isalpha((unsigned char)character))
		{
			character = tolower((unsigned char)character);
			if (character == 'a' || character == 'e' || character == 'i' ||
				character == 'o' || character == 'u')
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
		}
	}

	printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
	return 0;
}
