#include "main.h"
/**
 * print_sign-checks if number is positive or negative
 * @n:argument to be passed to the function
 * Return:+ if it is positive and - if it is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
