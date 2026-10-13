#include <stdio.h>

void reverse(int numbers[], int left, int right)
{
	while (left < right)
	{
		int temporary = numbers[left];
		numbers[left] = numbers[right];
		numbers[right] = temporary;
		left++;
		right--;
	}
}

int main(void)
{
	int numbers[100];
	int size, rotations;

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

	printf("Enter the number of right rotations: ");
	scanf("%d", &rotations);

	if (rotations < 0)
	{
		printf("The number of rotations cannot be negative.\n");
		return 0;
	}

	rotations %= size;
	reverse(numbers, 0, size - 1);
	reverse(numbers, 0, rotations - 1);
	reverse(numbers, rotations, size - 1);

	printf("Array after right rotation:\n");
	for (int index = 0; index < size; index++)
	{
		printf("%d ", numbers[index]);
	}

	printf("\n");

	return 0;
}
