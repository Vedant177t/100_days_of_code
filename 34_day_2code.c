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

	printf("Enter %d sorted elements in ascending order:\n", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to insert: ");
	scanf("%d", &element);

	position = size;
	while (position > 0 && numbers[position - 1] > element)
	{
		numbers[position] = numbers[position - 1];
		position--;
	}

	numbers[position] = element;
	size++;

	printf("Array after insertion:\n");
	for (int index = 0; index < size; index++)
	{
		printf("%d ", numbers[index]);
	}

	printf("\n");

	return 0;
}
