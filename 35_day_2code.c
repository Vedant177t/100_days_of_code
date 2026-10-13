#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size, position;

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

	printf("Enter the position to delete (1 to %d): ", size);
	scanf("%d", &position);

	if (position < 1 || position > size)
	{
		printf("Invalid position.\n");
		return 0;
	}

	for (int index = position - 1; index < size - 1; index++)
	{
		numbers[index] = numbers[index + 1];
	}

	size--;

	printf("Array after deletion:\n");
	for (int index = 0; index < size; index++)
	{
		printf("%d ", numbers[index]);
	}

	printf("\n");

	return 0;
}
