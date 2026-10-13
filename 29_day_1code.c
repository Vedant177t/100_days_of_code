#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	long long sum = 0;

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
		sum += numbers[index];
	}

	printf("Sum of array elements = %lld\n", sum);

	return 0;
}
