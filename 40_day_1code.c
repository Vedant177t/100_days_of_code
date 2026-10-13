#include <stdio.h>

int main(void)
{
	int matrix[10][10];
	int rows, columns;
	int printed = 0;

	if (scanf("%d %d", &rows, &columns) != 2 ||
		rows < 1 || rows > 10 || columns < 1 || columns > 10)
	{
		return 1;
	}

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			if (scanf("%d", &matrix[row][column]) != 1)
			{
				return 1;
			}
		}
	}

	for (int diagonal = 0; diagonal < rows + columns - 1; diagonal++)
	{
		int first_row = diagonal - (columns - 1);
		int last_row = diagonal;

		if (first_row < 0)
		{
			first_row = 0;
		}
		if (last_row >= rows)
		{
			last_row = rows - 1;
		}

		if (diagonal % 2 == 0)
		{
			for (int row = last_row; row >= first_row; row--)
			{
				if (printed > 0)
				{
					printf(" ");
				}
				printf("%d", matrix[row][diagonal - row]);
				printed++;
			}
		}
		else
		{
			for (int row = first_row; row <= last_row; row++)
			{
				if (printed > 0)
				{
					printf(" ");
				}
				printf("%d", matrix[row][diagonal - row]);
				printed++;
			}
		}
	}

	printf("\n");
	return 0;
}
