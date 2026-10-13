 #include <stdio.h>

int main(void)
{
	long long number;

	printf("Enter a positive number: ");
	scanf("%lld", &number);

	if (number <= 0)
	{
		printf("Please enter a positive number.\n");
		return 1;
	}

	printf("Factors of %lld are: ", number);
	for (long long divisor = 1; divisor <= number; divisor++)
	{
		if (number % divisor == 0)
		{
			printf("%lld ", divisor);
		}
	}
	printf("\n");

	return 0;
}
