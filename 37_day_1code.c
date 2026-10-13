#include <stdio.h>

int main(void)
{
	int matrix[10][10];
	int rows, columns;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	printf("Enter the number of columns: ");
	scanf("%d", &columns);

	if (rows < 1 || rows > 10 || columns < 1 || columns > 10)
	{
		printf("Rows and columns must be between 1 and 10.\n");
		return 0;
	}

	printf("Enter the matrix elements:\n");
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			scanf("%d", &matrix[row][column]);
		}
	}

	printf("Matrix:\n");
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			printf("%d\t", matrix[row][column]);
		}

		printf("\n");
	}

	return 0;
}
