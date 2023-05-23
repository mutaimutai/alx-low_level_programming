#include "main.h"
/**
 * times_table-prints 9 times table
 * return:0 if it is executed successfully
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	for (; i <= 9; i++)
	{
		for (; (j = j + i); j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
