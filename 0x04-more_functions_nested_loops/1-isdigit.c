#include "main.h"
/**
 * _isdigit-function to check a letter if it is a digit
 * @c:argument to be passed into the function
 * Return:1 if true and 0 if it is false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
