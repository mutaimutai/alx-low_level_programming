#include "main.h"
#include <stdio.h>
/**
 * print_to_98-prints numbers from 0-98
 * Return:0 when successfull
 * @n:argument passed
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		if (i != 98)
		{
			printf(", ");
		}

	}
}
