#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int minimum, maximum;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 1 || size > 100)
	{
		printf("Please enter a size between 1 and 100.\n");
		return 0;
	}

	printf("Enter %d elements:\n", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);
	}

	minimum = numbers[0];
	maximum = numbers[0];

	for (int index = 1; index < size; index++)
	{
		if (numbers[index] < minimum)
		{
			minimum = numbers[index];
		}

		if (numbers[index] > maximum)
		{
			maximum = numbers[index];
		}
	}

	printf("Minimum element = %d\n", minimum);
	printf("Maximum element = %d\n", maximum);

	return 0;
}
