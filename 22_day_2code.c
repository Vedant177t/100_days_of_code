#include <stdio.h>

int main(void)
{
	int terms;
	double sum = 0.0;

	printf("Enter the number of terms: ");
	scanf("%d", &terms);

	if (terms <= 0)
	{
		printf("Please enter a positive number of terms.\n");
		return 0;
	}

	sum = 1.0;

	for (int term = 2; term <= terms; term++)
	{
		sum += (double)(2 * term - 1) / (2 * term);
	}

	printf("Sum of the series = %.2f\n", sum);

	return 0;
}
