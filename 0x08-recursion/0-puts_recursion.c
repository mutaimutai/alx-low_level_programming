#include "main.h"
/**
 * _puts_recursion-function to print a string
 * @s:the string to be passed
 * return:if the string is at the end
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
