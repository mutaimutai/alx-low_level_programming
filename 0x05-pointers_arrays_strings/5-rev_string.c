#include "main.h"
#include <stdio.h>
/**
 * rev_string-reverses a string
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	for (; s[i] != '\0'; i++)
	{
		i++;
	}
	
	for (j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
}
