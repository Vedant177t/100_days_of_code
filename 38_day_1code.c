#include <stdio.h>

int main(void)
{
	int first[10][10];
	int second[10][10];
	int rows, columns;
	int second_rows, second_columns;

	if (scanf("%d %d", &rows, &columns) != 2 ||
		rows < 1 || rows > 10 || columns < 1 || columns > 10)
	{
		return 1;
	}

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			if (scanf("%d", &first[row][column]) != 1)
			{
				return 1;
			}
		}
	}

	if (scanf("%d %d", &second_rows, &second_columns) != 2 ||
		second_rows != rows || second_columns != columns)
	{
		return 1;
	}

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			if (scanf("%d", &second[row][column]) != 1)
			{
				return 1;
			}
		}
	}

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			printf("%d", first[row][column] + second[row][column]);
			if (column + 1 < columns)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
