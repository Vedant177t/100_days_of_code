#include <stdio.h>

int main(void)
{
	char text[1000];
	int character;
	int length = 0;
	int is_palindrome = 1;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		if (length >= 999)
		{
			return 1;
		}
		text[length++] = (char)character;
	}

	for (int index = 0; index < length / 2; index++)
	{
		if (text[index] != text[length - index - 1])
		{
			is_palindrome = 0;
			break;
		}
	}

	printf("%s\n", is_palindrome ? "Palindrome" : "Not palindrome");
	return 0;
}
