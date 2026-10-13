 #include <stdio.h>

int main(void)
{
	int number, first_digit, last_digit, divisor = 1, middle;

	printf("Enter a number: ");
	scanf("%d", &number);

	last_digit = number % 10;

	while (number / divisor >= 10)
	{
		divisor *= 10;
	}

	first_digit = number / divisor;
	middle = number % divisor;
	middle /= 10;

	number = last_digit * divisor + middle * 10 + first_digit;

	printf("Number after swapping first and last digit: %d\n", number);

	return 0;
}
