#include "main.h"
#include <string.h>
/**
 * _strncpy-copies a string
 *@dest:first string
 *@src:second string
 *@n:length of strings
 *Return:final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '/'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
