 #include <stdio.h>

int main(void)
{
	long long first_number;
	long long second_number;
	long long remainder;

	printf("Enter two positive numbers: ");
	scanf("%lld %lld", &first_number, &second_number);

	if (first_number <= 0 || second_number <= 0)
	{
		printf("Please enter positive numbers.\n");
		return 1;
	}

	while (second_number != 0)
	{
		remainder = first_number % second_number;
		first_number = second_number;
		second_number = remainder;
	}

	printf("HCF (GCD) = %lld\n", first_number);

	return 0;
}
