#include <stdio.h>

int main(void)
{
	int matrix[10][10];
	int rows, columns;
	int diagonal_size;
	int are_distinct = 1;

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

	diagonal_size = rows < columns ? rows : columns;
	for (int index = 0; index < diagonal_size; index++)
	{
		for (int previous = 0; previous < index; previous++)
		{
			if (matrix[index][index] == matrix[previous][previous])
			{
				are_distinct = 0;
			}
		}
	}

	printf("%s\n", are_distinct ? "True" : "False");
	return 0;
}
