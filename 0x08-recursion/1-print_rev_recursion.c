#include "main.h"
/**
 * _print_rev_recursion-reverses a string using
 * @s:the string to be passed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

