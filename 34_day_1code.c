#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size, target;
	int left, right, middle;
	int position = -1;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 1 || size > 100)
	{
		printf("Please enter a size between 1 and 100.\n");
		return 0;
	}

	printf("Enter %d sorted elements in ascending order:\n", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to search: ");
	scanf("%d", &target);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		middle = left + (right - left) / 2;

		if (numbers[middle] == target)
		{
			position = middle;
			break;
		}

		if (numbers[middle] < target)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
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
