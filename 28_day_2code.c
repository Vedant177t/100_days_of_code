#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;

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

	printf("Array elements are:\n");
	for (int index = 0; index < size; index++)
	{
		printf("%d ", numbers[index]);
	}

	printf("\n");

	return 0;
}
