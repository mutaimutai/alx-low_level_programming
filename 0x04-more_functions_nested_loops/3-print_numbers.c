#include "main.h"
#include <stdio.h>
/**
 * print_numbers-prints numbers 0 to 9
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
