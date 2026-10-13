#include <stdio.h>

int main(void)
{
	int matrix[10][10];
	int rows, columns;
	long long diagonal_sum = 0;

	if (scanf("%d %d", &rows, &columns) != 2 ||
		rows < 1 || rows > 10 || columns < 1 || columns > 10 ||
		rows != columns)
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

			if (row == column)
			{
				diagonal_sum += matrix[row][column];
			}
		}
	}

	printf("%lld\n", diagonal_sum);
	return 0;
}
