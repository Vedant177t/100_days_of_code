#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size, target;
	int position = -1;

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

	printf("Enter the element to search: ");
	scanf("%d", &target);

	for (int index = 0; index < size; index++)
	{
		if (numbers[index] == target)
		{
			position = index;
			break;
		}
	}

	if (position != -1)
	{
		printf("Element found at position %d.\n", position + 1);
	}
	else
	{
		printf("Element not found.\n");
	}

	return 0;
}
