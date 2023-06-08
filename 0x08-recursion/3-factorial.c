#include "main.h"
/**
 *factorial- is a function that finds factorial of a number
 *@n:number to be checked
 *Return:-1 if an error, 1 if n is 0 and returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
