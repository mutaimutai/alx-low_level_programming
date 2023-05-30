#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string-reverses a string
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int i, j = 0;

	i = strlen(s);
	for (j = i - 1; j > 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
