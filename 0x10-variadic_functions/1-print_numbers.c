#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers-vaiadic funcion thst prints integers
 * @separator:the string to be printed
 * @n:number of intergers ti be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
