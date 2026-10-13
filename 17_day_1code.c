 #include <stdio.h>

int main(void)
{
	long long number;
	long long original;
	long long temporary;
	long long sum = 0;
	int digits = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
	{
		printf("The number is not an Armstrong number.\n");
		return 0;
	}

	original = number;
	temporary = number;

	do
	{
		digits++;
		temporary /= 10;
	} while (temporary != 0);

	temporary = number;
	do
	{
		int digit = (int)(temporary % 10);
		long long power = 1;

		for (int count = 0; count < digits; count++)
		{
			power *= digit;
		}

		sum += power;
		temporary /= 10;
	} while (temporary != 0);

	if (sum == original)
	{
		printf("The number is an Armstrong number.\n");
	}
	else
	{
		printf("The number is not an Armstrong number.\n");
	}

	return 0;
}
