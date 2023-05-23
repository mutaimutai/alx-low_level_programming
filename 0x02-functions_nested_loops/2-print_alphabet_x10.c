#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10-prints alpabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c = 'a';

		for (; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
