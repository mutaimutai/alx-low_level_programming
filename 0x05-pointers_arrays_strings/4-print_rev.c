#include "main.h"
/**
 * print_rev-prints a sring in reverse
 * @s:string to be passed as argument
 */
void print_rev(char *s)
{
	int count = 0;
	int j = 0;

	for (; *(s + count); count++)
	{
	}

	for (j = count - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
