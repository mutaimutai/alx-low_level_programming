#include "main.h"
/**
 * isupper-checks for uppercase character
 * @n:is the argument passed into the function
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
