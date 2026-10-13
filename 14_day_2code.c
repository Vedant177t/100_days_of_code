 #include <stdio.h>

int main(void)
{
	int n;
	long long product = 1;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int number = 2; number <= n; number += 2)
	{
		product *= number;
	}

	printf("Product of even numbers from 1 to %d = %lld\n", n, product);

	return 0;
}
