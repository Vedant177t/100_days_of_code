 #include <stdio.h>

int main(void)
{
	long long number;
	long long reversed = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	while (number != 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	printf("Reversed number = %lld\n", reversed);

	return 0;
}
