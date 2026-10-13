#include <stdio.h>

int main(void)
{
	for (int stars = 1; stars <= 9; stars += 2)
	{
		for (int count = 1; count <= stars; count++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (int stars = 7; stars >= 1; stars -= 2)
	{
		for (int count = 1; count <= stars; count++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
