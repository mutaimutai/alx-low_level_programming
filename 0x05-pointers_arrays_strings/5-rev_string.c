#include "main.h"
#include <stdio.h>
/**
 * rev_string-reverses a string
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int j;
	j = i - 1;

	while (j >= 0)
	{
		putchar(s[j]);
		j--;
	}
}
