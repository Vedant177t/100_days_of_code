#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char sentence[1000];
	char longest[1000] = "";
	int longest_length = 0;
	int word_start = 0;

	if (fgets(sentence, sizeof(sentence), stdin) == NULL)
	{
		return 1;
	}

	for (int index = 0; ; index++)
	{
		if (sentence[index] != '\0' && !isspace((unsigned char)sentence[index]))
		{
			continue;
		}

		int word_length = index - word_start;
		if (word_length > longest_length)
		{
			for (int copy_index = 0; copy_index < word_length; copy_index++)
			{
				longest[copy_index] = sentence[word_start + copy_index];
			}
			longest[word_length] = '\0';
			longest_length = word_length;
		}

		if (sentence[index] == '\0')
		{
			break;
		}

		word_start = index + 1;
	}

	printf("%s\n", longest);
	return 0;
}
