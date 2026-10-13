#include <stdio.h>

int main(void)
{
	char date[100];
	const char *months[] = {
		"Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	int day;
	int month;
	int year;

	if (fgets(date, sizeof(date), stdin) == NULL ||
		sscanf(date, "%d/%d/%d", &day, &month, &year) != 3 ||
		month < 1 || month > 12)
	{
		return 1;
	}

	printf("%02d-%s-%04d\n", day, months[month - 1], year);
	return 0;
}
