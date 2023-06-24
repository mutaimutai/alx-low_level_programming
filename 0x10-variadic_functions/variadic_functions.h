#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - Represents a format specifier and its corresponding print function.
 * @c: A pointer to a string representing the format specifier.
 * @f: A pointer to the print function associated with the format specifier.
 *
 * Description: This structure associates a format specifier with its respective print function.
 *              It is used by the print_all function to determine how to print the values.
 */
int print_s(va_list any);
int print_c(va_list any);
int print_f(va_list any);
int print_i(va_list any);

struct op
{
	char *c;
	int (*f)(va_list any);
};
#endif
