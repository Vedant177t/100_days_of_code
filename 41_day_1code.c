#include <stdio.h>

int main(void)
{
	int character;
	int count = 0;

	while ((character = getchar()) != '\n' && character != EOF)
	{
		count++;
	}

	printf("%d\n", count);
	return 0;
}
