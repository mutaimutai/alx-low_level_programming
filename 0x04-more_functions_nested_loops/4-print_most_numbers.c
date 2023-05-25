#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers-prints numbers except
 */

void print_most_numbers(void)
{
	int i = 0;

	if (i != 2 || i != 4)
	{
		for (; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
