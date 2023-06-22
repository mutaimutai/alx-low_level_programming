#include "function_pointers.h"
/**
 * print name- a function that takes in a function pointer as argument
 * @name:the argument to be printed
 * @f:the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
