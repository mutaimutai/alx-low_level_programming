#include "main.h"
/**
 * @n:argument to be passed to the function
 * print_last_digit-function that prints the last digit of a number
 * Return:0 if the program is successfull
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
