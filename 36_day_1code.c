#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int largest = 0, second_largest = 0;
	int has_largest = 0, has_second_largest = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 2 || size > 100)
	{
		printf("Please enter between 2 and 100 elements.\n");
		return 0;
	}

	printf("Enter %d elements:\n", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);

		if (!has_largest || numbers[index] > largest)
		{
			if (has_largest)
			{
				second_largest = largest;
				has_second_largest = 1;
			}

			largest = numbers[index];
			has_largest = 1;
		}
		else if (numbers[index] < largest &&
				 (!has_second_largest || numbers[index] > second_largest))
		{
			second_largest = numbers[index];
			has_second_largest = 1;
		}
	}

	if (has_second_largest)
	{
		printf("Second largest element = %d\n", second_largest);
	}
	else
	{
		printf("There is no second distinct largest element.\n");
	}

	return 0;
}
