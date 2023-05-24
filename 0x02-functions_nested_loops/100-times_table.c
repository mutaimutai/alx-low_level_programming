#include "main.h"
#include <stdio.h>

/**
 * print_times_table-prints a timetable to 15
 *@n:argument to be passed
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		break;
	}

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 15)
			{
				printf("%2d\n", i * j);
			}
			else
			{
				printf("%2d, ", i * j);
			}
		}
	}
}
