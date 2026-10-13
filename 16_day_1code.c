 #include <stdio.h>

int main(void)
{
	unsigned long long number;
	char binary[64];
	int index = 0;

	printf("Enter a number: ");
	scanf("%llu", &number);

	if (number == 0)
	{
		printf("Binary representation = 0\n");
		return 0;
	}

	while (number > 0)
	{
		binary[index++] = (char)('0' + number % 2);
		number /= 2;
	}

	printf("Binary representation = ");
	for (int position = index - 1; position >= 0; position--)
	{
		putchar(binary[position]);
	}
	putchar('\n');

	return 0;
}
