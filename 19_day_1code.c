 #include <stdio.h>

long long find_gcd(long long first_number, long long second_number)
{
	while (second_number != 0)
	{
		long long remainder = first_number % second_number;
		first_number = second_number;
		second_number = remainder;
	}

	return first_number;
}

int main(void)
{
	long long first_number;
	long long second_number;
	long long gcd;
	long long lcm;

	printf("Enter two positive numbers: ");
	scanf("%lld %lld", &first_number, &second_number);

	if (first_number <= 0 || second_number <= 0)
	{
		printf("Please enter positive numbers.\n");
		return 1;
	}

	gcd = find_gcd(first_number, second_number);
	lcm = (first_number / gcd) * second_number;

	printf("LCM = %lld\n", lcm);

	return 0;
}
