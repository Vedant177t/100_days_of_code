 #include <stdio.h>

int main(void)
{
	int number;
	unsigned long long factorial = 1;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0)
	{
		printf("Factorial is not defined for negative numbers.\n");
		return 1;
	}

	for (int value = 1; value <= number; value++)
	{
		factorial *= value;
	}

	printf("Factorial of %d = %llu\n", number, factorial);

	return 0;
}
