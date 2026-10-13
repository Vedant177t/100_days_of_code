 #include <stdio.h>

int main(void)
{
	long long number;
	long long original;
	long long reversed = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
	{
		printf("The number is not a palindrome.\n");
		return 0;
	}

	original = number;

	while (number != 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	if (original == reversed)
	{
		printf("The number is a palindrome.\n");
	}
	else
	{
		printf("The number is not a palindrome.\n");
	}

	return 0;
}
