#include <stdio.h>

int main(void)
{
	int first_array[50], second_array[50], merged_array[100];
	int first_size, second_size;
	int merged_size;

	printf("Enter the number of elements in the first array: ");
	scanf("%d", &first_size);

	printf("Enter the number of elements in the second array: ");
	scanf("%d", &second_size);

	if (first_size < 1 || first_size > 50 || second_size < 1 || second_size > 50)
	{
		printf("Each array must contain between 1 and 50 elements.\n");
		return 0;
	}

	printf("Enter the first array elements:\n");
	for (int index = 0; index < first_size; index++)
	{
		scanf("%d", &first_array[index]);
		merged_array[index] = first_array[index];
	}

	printf("Enter the second array elements:\n");
	for (int index = 0; index < second_size; index++)
	{
		scanf("%d", &second_array[index]);
		merged_array[first_size + index] = second_array[index];
	}

	merged_size = first_size + second_size;

	printf("Merged array:\n");
	for (int index = 0; index < merged_size; index++)
	{
		printf("%d ", merged_array[index]);
	}

	printf("\n");

	return 0;
}
