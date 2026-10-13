#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[1000];

	if (fgets(sentence, sizeof(sentence), stdin) == NULL)
	{
		return 1;
	}

	sentence[strcspn(sentence, "\r\n")] = '\0';

	for (int start = 0; sentence[start] != '\0';)
	{
		if (isspace((unsigned char)sentence[start]))
		{
			start++;
			continue;
		}

		int end = start;
		while (sentence[end] != '\0' && !isspace((unsigned char)sentence[end]))
		{
			end++;
		}

		for (int left = start, right = end - 1; left < right; left++, right--)
		{
			char temporary = sentence[left];
			sentence[left] = sentence[right];
			sentence[right] = temporary;
		}

		start = end;
	}

	printf("%s\n", sentence);
	return 0;
}
