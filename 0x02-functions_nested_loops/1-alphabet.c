#include <stdio.h>
#include "main.h"

/**
 * print_alphabet-prints alphabet in small
 */

void print_alphabet(void)
{
	char c;

	for (c = a; c <= z; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
