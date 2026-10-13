#include <stdio.h>

int factorial(int digit)
{
	int result = 1;

	for (int value = 2; value <= digit; value++)
	{
		result *= value;
	}

	return result;
}

int main(void)
{
	int number, original_number, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	original_number = number;

	if (number >= 0)
	{
		do
		{
			sum += factorial(number % 10);
			number /= 10;
		} while (number > 0);
	}

	if (sum == original_number)
	{
		printf("%d is a strong number.\n", original_number);
	}
	else
	{
		printf("%d is not a strong number.\n", original_number);
	}

	return 0;
}
