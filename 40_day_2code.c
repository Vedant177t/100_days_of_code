#include <stdio.h>

int main(void)
{
	int first[10][10];
	int second[10][10];
	long long product[10][10] = {0};
	int first_rows, first_columns;
	int second_rows, second_columns;

	if (scanf("%d %d", &first_rows, &first_columns) != 2 ||
		first_rows < 1 || first_rows > 10 ||
		first_columns < 1 || first_columns > 10)
	{
		return 1;
	}

	for (int row = 0; row < first_rows; row++)
	{
		for (int column = 0; column < first_columns; column++)
		{
			if (scanf("%d", &first[row][column]) != 1)
			{
				return 1;
			}
		}
	}

	if (scanf("%d %d", &second_rows, &second_columns) != 2 ||
		second_rows < 1 || second_rows > 10 ||
		second_columns < 1 || second_columns > 10 ||
		first_columns != second_rows)
	{
		return 1;
	}

	for (int row = 0; row < second_rows; row++)
	{
		for (int column = 0; column < second_columns; column++)
		{
			if (scanf("%d", &second[row][column]) != 1)
			{
				return 1;
			}
		}
	}

	for (int row = 0; row < first_rows; row++)
	{
		for (int column = 0; column < second_columns; column++)
		{
			for (int index = 0; index < first_columns; index++)
			{
				product[row][column] +=
					(long long)first[row][index] * second[index][column];
			}
		}
	}

	for (int row = 0; row < first_rows; row++)
	{
		for (int column = 0; column < second_columns; column++)
		{
			if (column > 0)
			{
				printf(" ");
			}
			printf("%lld", product[row][column]);
		}
		printf("\n");
	}

	return 0;
}
