#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * @c:argument to be passed to the function
 * Return:1 if letter is an alphabet 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
