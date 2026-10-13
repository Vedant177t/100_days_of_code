#include <stdio.h>

int main(void)
{
	int group_sizes[] = {1, 3, 5, 3, 1};
	int group_count = sizeof(group_sizes) / sizeof(group_sizes[0]);

	for (int group = 0; group < group_count; group++)
	{
		for (int star = 0; star < group_sizes[group]; star++)
		{
			printf("*\n");
		}

		if (group < group_count - 1)
		{
			printf("\n");
		}
	}

	return 0;
}
