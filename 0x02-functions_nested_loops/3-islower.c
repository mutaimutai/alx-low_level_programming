#include "main.h"
/**
 * int _islower-checks if a character is lowercase
 * Return:0 if successfull 1 if not
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
