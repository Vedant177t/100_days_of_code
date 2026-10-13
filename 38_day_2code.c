#include <stdio.h>

int main(void)
{
	int matrix[10][10];
	int rows, columns;
	int is_symmetric;

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

	is_symmetric = rows == columns;
	if (is_symmetric)
	{
		for (int row = 0; row < rows; row++)
		{
			for (int column = row + 1; column < columns; column++)
			{
				if (matrix[row][column] != matrix[column][row])
				{
					is_symmetric = 0;
				}
			}
		}
	}

	printf("%s\n", is_symmetric ? "True" : "False");
	return 0;
}
