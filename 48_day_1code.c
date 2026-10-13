#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[1000];
	char second[1000];
	char doubled[2000];
	int rotation = 0;

	if (fgets(first, sizeof(first), stdin) == NULL ||
		fgets(second, sizeof(second), stdin) == NULL)
	{
		return 1;
	}

	first[strcspn(first, "\r\n")] = '\0';
	second[strcspn(second, "\r\n")] = '\0';

	if (strlen(first) == strlen(second))
	{
		strcpy(doubled, first);
		strcat(doubled, first);
		rotation = strstr(doubled, second) != NULL;
	}

	printf(rotation ? "Rotation\n" : "Not rotation\n");
	return 0;
}
