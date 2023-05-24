#include "main.h"
#include <stdio.h>

/**
 * print_times_table-prints a timetable to 15
 *@n:argument to be passed
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == n)
			{
				printf("%3d\n", i * j);
			}
			else
			{
				printf("%3d, ", i * j);
			}
		}
	}
}
