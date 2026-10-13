 #include <stdio.h>

int main(void)
{
	long long number;
	long long product = 1;
	int found_odd_digit = 0;

	printf("Enter a non-negative number: ");
	scanf("%lld", &number);

	if (number < 0)
	{
		printf("Please enter a non-negative number.\n");
		return 1;
	}

	do
	{
		int digit = (int)(number % 10);

		if (digit % 2 != 0)
		{
			product *= digit;
			found_odd_digit = 1;
		}

		number /= 10;
	} while (number != 0);

	if (found_odd_digit)
	{
		printf("Product of odd digits = %lld\n", product);
	}
	else
	{
		printf("The number contains no odd digits.\n");
	}

	return 0;
}
