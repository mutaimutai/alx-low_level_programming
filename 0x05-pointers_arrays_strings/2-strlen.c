#include "main.h"
/**
 * _strlen-functions that checks for string lenth
 * @s:string to be checked
 * Return:returns the lengh od thr syring
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
