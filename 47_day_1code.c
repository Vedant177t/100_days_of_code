#include <limits.h>
#include <stdio.h>

int main(void)
{
	char first[1000];
	char second[1000];
	int frequencies[UCHAR_MAX + 1] = {0};
	int anagrams = 1;

	if (fgets(first, sizeof(first), stdin) == NULL ||
		fgets(second, sizeof(second), stdin) == NULL)
	{
		return 1;
	}

	for (int index = 0; first[index] != '\0' && first[index] != '\n' && first[index] != '\r'; index++)
	{
		frequencies[(unsigned char)first[index]]++;
	}

	for (int index = 0; second[index] != '\0' && second[index] != '\n' && second[index] != '\r'; index++)
	{
		frequencies[(unsigned char)second[index]]--;
	}

	for (int index = 0; index <= UCHAR_MAX; index++)
	{
		if (frequencies[index] != 0)
		{
			anagrams = 0;
			break;
		}
	}

	printf(anagrams ? "Anagrams\n" : "Not anagrams\n");
	return 0;
}
