#include"main.h"
#include <stdio.h>

/**
 *_puts-function that prints out a string
 *@str:argument passed in
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
