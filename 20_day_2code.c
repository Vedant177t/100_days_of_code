 #include <stdio.h>
 #include <string.h>

int main(void)
{
	char binary[100];
	size_t length;
	int is_valid = 1;

	printf("Enter a binary number: ");
	fgets(binary, sizeof(binary), stdin);

	length = strcspn(binary, "\n");
	binary[length] = '\0';

	if (length == 0)
	{
		is_valid = 0;
	}
	else
	{
		for (size_t position = 0; position < length; position++)
		{
			if (binary[position] != '0' && binary[position] != '1')
			{
				is_valid = 0;
				break;
			}

			binary[position] = binary[position] == '0' ? '1' : '0';
		}
	}

	if (is_valid)
	{
		printf("1's complement = %s\n", binary);
	}
	else
	{
		printf("Please enter a valid binary number.\n");
	}

	return 0;
}
