#include "main.h"
/**
 * print_square-prints a square to the terminal
 * @size:is the input argument
 */

void print_square(int size)
{
	int i, j;

	if ( <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}