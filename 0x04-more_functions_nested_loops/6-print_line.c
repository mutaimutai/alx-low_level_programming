#include "main.h"
/**
 * print_line-prints a line to the terminal
 *@n:the argument input
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
