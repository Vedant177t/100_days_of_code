#include <stdio.h>

int main(void)
{
	char string[1000];
	char target;
	int frequency = 0;

	if (fgets(string, sizeof(string), stdin) == NULL || scanf(" %c", &target) != 1)
	{
		return 1;
	}

	for (int index = 0; string[index] != '\0' && string[index] != '\n'; index++)
	{
		if (string[index] == target)
		{
			frequency++;
		}
	}

	printf("%d\n", frequency);
	return 0;
}
