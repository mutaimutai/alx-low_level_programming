#include "main.h"
/**
 * _isupper-checks for uppercase character
 * @c:is the argument passed into the function
 * Return:1 for true and 0 for false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
