 #include <stdio.h>

int main(void)
{
	long long number;
	long long sum = 0;

	printf("Enter a positive number: ");
	scanf("%lld", &number);

	if (number < 0)
	{
		printf("Please enter a non-negative number.\n");
		return 1;
	}

	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}

	printf("Sum of digits = %lld\n", sum);

	return 0;
}
