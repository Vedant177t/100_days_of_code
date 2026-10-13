#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int positive_count = 0;
	int negative_count = 0;
	int zero_count = 0;

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

		if (numbers[index] > 0)
		{
			positive_count++;
		}
		else if (numbers[index] < 0)
		{
			negative_count++;
		}
		else
		{
			zero_count++;
		}
	}

	printf("Positive elements = %d\n", positive_count);
	printf("Negative elements = %d\n", negative_count);
	printf("Zero elements = %d\n", zero_count);

	return 0;
}
