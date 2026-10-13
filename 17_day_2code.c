 #include <stdio.h>

int main(void)
{
	long long number;
	int is_prime = 1;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 2)
	{
		is_prime = 0;
	}
	else
	{
		for (long long divisor = 2; divisor <= number / divisor; divisor++)
		{
			if (number % divisor == 0)
			{
				is_prime = 0;
				break;
			}
		}
	}

	if (is_prime)
	{
		printf("%lld is a prime number.\n", number);
	}
	else
	{
		printf("%lld is not a prime number.\n", number);
	}

	return 0;
}
