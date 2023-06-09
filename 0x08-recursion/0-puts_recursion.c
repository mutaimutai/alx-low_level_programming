#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - pritns str recursivly
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(++s);
	}
}
