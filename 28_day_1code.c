#include <stdio.h>

int main(void)
{
	int limit, number, divisor, is_prime;

	printf("Enter the value of n: ");
	scanf("%d", &limit);

	printf("Prime numbers from 1 to %d are:\n", limit);

	for (number = 2; number <= limit; number++)
	{
		is_prime = 1;

		for (divisor = 2; divisor <= number / divisor; divisor++)
		{
			if (number % divisor == 0)
			{
				is_prime = 0;
				break;
			}
		}

		if (is_prime)
		{
			printf("%d ", number);
		}
	}

	printf("\n");

	return 0;
}
