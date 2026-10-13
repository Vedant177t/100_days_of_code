#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size, element, position;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 1 || size >= 100)
	{
		printf("Please enter a size between 1 and 99.\n");
		return 0;
	}

	printf("Enter %d elements:\n", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to insert: ");
	scanf("%d", &element);

	printf("Enter the position (1 to %d): ", size + 1);
	scanf("%d", &position);

	if (position < 1 || position > size + 1)
	{
		printf("Invalid position.\n");
		return 0;
	}

	for (int index = size; index >= position; index--)
	{
		numbers[index] = numbers[index - 1];
	}

	numbers[position - 1] = element;
	size++;

	printf("Array after insertion:\n");
	for (int index = 0; index < size; index++)
	{
		printf("%d ", numbers[index]);
	}

	printf("\n");

	return 0;
}
