#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all-a variadic function that summ all numbers
 * @n:number of arguments passd in
 * Return:the sum of all the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
	int summ = 0;
	int numbers;

	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		summ = summ + numbers;
	}
	va_end(args);
	return (summ);
}
